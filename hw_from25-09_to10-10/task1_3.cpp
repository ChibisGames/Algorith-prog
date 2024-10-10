#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n=1, opt;
    double x=0, f, fact;
    char cont;
    do {
    // print the menu of options
        cout << "\nSelect an option from [1-6] according to the menu:" << endl;
        cout << "[1]. Enter x and n" << endl;
        cout << "[2]. e^x" << endl;
        cout << "[3]. ln(1 + x)" << endl;
        cout << "[4]. sin(x)" << endl;
        cout << "[5]. cos(x)" << endl;
        cout << "[6]. 1/(1 - x)^2" << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "Enter option: ";
        cin >> opt;
        switch (opt) {
            case 1:
                cout << "Please, enter x: " << endl;
                cin >> x;
                cout << "Please, enter n[2, 20]: " << endl;
                cin >> n;
                break;
            case 2:
                // f(x) = e^x
                f = 1;
                fact = 1;
                for (int i = 1; i < n; i++)
                {
                    f += pow(x, i) / fact;
                    fact *= i + 1;
                }
                cout << "1) e^x =" << f << endl;
                break;
            case 3:
                // f(x) = ln(1 + x)
                f = 0;
                for (int i = 0; i < n; i++)
                {
                    f += pow(-1, i) * pow(x, i + 1) / (i + 1);
                }
                cout << "2) ln(1 + x) = " << f << endl;
                break;
            case 4:
                // f(x) = sin(x)
                f = 0;
                fact = 1;
                for (int i = 0; i < n; i++)
                {
                    f += pow(-1, i) * pow(x, 2 * i + 1) / fact;
                    fact *= (2 * i + 2)*(2 * i + 3);
                    
                }
                cout << "3) sin(x) = " << f << endl;
                break;
            case 5:
                // f(x) = cos(x)
                f = 0;
                fact = 1;
                for (int i = 0; i < n; i++)
                {
                    f += pow(-1, i) * pow(x, 2 * i) / fact;
                    fact *= (2 * i + 1) * (2 * i + 2);
                }
                cout << "4) cos(x) = " << f << endl;
                break;
            case 6: 
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
                break;
        }
        cout << "\nDo you want continue [Y|N]? " << endl;
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');
    cout << "\n The program is over!" << endl;
    
    return 0;
}