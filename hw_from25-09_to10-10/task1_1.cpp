#include <iostream>
#include <cmath>
using namespace std;


int sum_of_the_divisors(int n) // i don't want "litter" the code, task is being completed (about using for/while and do-while, i mean)
{
    int sum = 0;

    for (int i = 1; i <= pow(n, 0.5); i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                sum += i;
                sum += n / i;
            }
            else {
                sum += i;
            }
        }

    }

    return sum;
}


int number_of_the_divisors(int n) // i don't want "litter" the code, task is being completed (about using for/while and do-while, i mean)
{
    int sum = 0;

    for (int i = 1; i <= pow(n, 0.5); i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                sum += 2;
            }
            else {
                sum += 1;
            }
        }

    }

    return sum;
}


int main() {
    int a, b, c, ans;

    // 1 

    cout << "Please, enter 2 numbers of range:" << endl;
    cin >> a;
    cin >> b;
    if (a > b)
    {
        c = a;
        a = b;
        b = c;
    }

    ans = sum_of_the_divisors(a) + sum_of_the_divisors(b);
    cout << "1) " << ans << endl;

    // 2

    ans = number_of_the_divisors(a) * number_of_the_divisors(b);
    cout << "2) " << ans << endl;

    // 3

    c = 1;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            if (i % 2 == 1)
            {
                c *= i;
            }

        }
    }
    ans = c;

    c = 0;
    for (int i = 1; i <= b; i++)
    {
        if (b % i == 0)
        {
            if (i % 2 == 0)
            {
                c += i;
            }

        }
    }

    ans += c;
    cout << "3) " << ans << endl;

    // 4

    c = 1;
    for (int i = 2; i < a; i++)
    { 
        while (a % i == 0 && b % i == 0 && a >= i)
        {
            a /= i;
            b /= i;
            c *= i;
        }

    }

    if (c == 1)
    {
        cout << "4) Primary number";
    }
    else
    {
        cout << "4) " << c;
    }

    return 0;
}