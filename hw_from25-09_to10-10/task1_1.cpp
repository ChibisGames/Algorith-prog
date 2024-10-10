#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int a, b, c, ans;
    int sum;    

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

    sum = 0;
    // for a
    for (int i = 1; i <= pow(a, 0.5); i++)
    {
        if (a % i == 0)
        {
            if (i != a / i)
            {
                sum += i;
                sum += a / i;
            }
            else {
                sum += i;
            }
        }
    }

    ans = sum;
    sum = 0;
    // for b
    for (int i = 1; i <= pow(b, 0.5); i++)
    {
        if (b % i == 0)
        {
            if (i != b / i)
            {
                sum += i;
                sum += b / i;
            }
            else {
                sum += i;
            }
        }
    }

    ans += sum;
    cout << "1) " << ans << endl;

    // 2

    sum = 0;
    // for a
    for (int i = 1; i <= pow(a, 0.5); i++)
    {
        if (a % i == 0)
        {
            if (i != a / i)
            {
                sum += 2;
            }
            else {
                sum += 1;
            }
        }
    }
    ans = sum;

    sum = 0;
    // for b
    for (int i = 1; i <= pow(b, 0.5); i++)
    {
        if (b % i == 0)
        {
            if (i != b / i)
            {
                sum += 2;
            }
            else {
                sum += 1;
            }
        }
    }

    ans *= sum;
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