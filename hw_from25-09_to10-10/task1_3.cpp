#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n;
    double x, f, fact;
    cout << "Please, enter x: " << endl;
    cin >> x;
    cout << "Please, enter n[2, 20]: " << endl;
    cin >> n;

    // f(x) = e^x
    f = 1;
    fact = 1;
    for (int i = 1; i < n; i++)
    {
        f += pow(x, i) / fact;
        fact *= i + 1;
    }
    cout << "1) e^x =" << f << endl;

    // f(x) = ln(1 + x)
    f = 0;
    for (int i = 0; i < n; i++)
    {
        f += pow(-1, i) * pow(x, i + 1) / (i + 1);
    }
    cout << "2) ln(1 + x) = " << f << endl;

    // f(x) = sin(x)
    f = 0;
    fact = 1;
    for (int i = 0; i < n; i++)
    {
        f += pow(-1, i) * pow(x, 2 * i + 1) / fact;
        fact *= (2 * i + 2)*(2 * i + 3);
        
    }
    cout << "3) sin(x) = " << f << endl;

    // f(x) = cos(x)
    f = 0;
    fact = 1;
    for (int i = 0; i < n; i++)
    {
        f += pow(-1, i) * pow(x, 2 * i) / fact;
        fact *= (2 * i + 1) * (2 * i + 2);
    }
    cout << "4) cos(x) = " << f << endl;

    // f(x) = 1/ (1-x)^2
    if (abs(x) < 1)
    {
        f = 0;
        for (int i = 0; i < n; i++)
        {
            f += (i + 1) * pow(x, i);
        }
        cout << "5) 1/ (1-x)^2 = " << f << endl;
    }
    else
    {
        cout << "5) Sorry,but x must be |x|<1";
    }
    return 0;
}