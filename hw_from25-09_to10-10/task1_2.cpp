#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n, s, dig, opt, r, c;
    char cont;
    do {
        // print the menu of options

        cout << "\nSelect an option from [1-8] according to the menu:" << endl;
        cout << "[1]. Enter a number in the range between 1000 and 999999" << endl;
        cout << "[2]. Print the digits of the number" << endl;
        cout << "[3]. Count how many digits the number has" << endl;
        cout << "[4]. Return the lowest and highest digits of the number" << endl;
        cout << "[5]. Return the sum of the digits of the number" << endl;
        cout << "[6]. Return the product of the odd digits" << endl;
        cout << "[7]. Calculate the inverted version of the number" << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "Enter option: ";
        cin >> opt;
        switch (opt) {
        case 1: // OPTION 01: Enter the number
            do
            {
                cout << "Enter a number in the range between 1000 and 999999" << endl;
                cin >> r;
            } while (1000 > r || r > 999999);
            break;

        case 2: // OPTION 02: Check if the number has repeated
            cout << "Enter a number" << endl;
            cin >> r;
            n = r;
            c = 0;
            while (r > 0)
            {
                c += 1;
                r /= 10;
            }
            r = n;
            for (int i = 0; i < c; i++)
            {
                cout << r % 10 << " \n";
                r /= 10;
            }
            cout << endl;
            break;

        case 3: // OPTION 03: Count how many digits the number has
            cout << "Enter a number" << endl;
            cin >> r;
            c = 0;
            while (r > 0)
            {
                c += 1;
                r /= 10;
            }
            cout << "Size is " << c << endl;
            break;

        case 4: // OPTION 04: Return the lowest and highest digits of the
            int max, min;
            cout << "Enter a number" << endl;
            cin >> r;
            n = r;
            c = 0;
            while (r > 0)
            {
                c += 1;
                r /= 10;
            }
            r = n;
            for (int i = 0; i < c; i++)
            {
                if (i == 0)
                {
                    max = r % 10;
                    min = max;
                }
                else {
                    if (max < r % 10)
                    {
                        max = r % 10;
                    }
                    if (min > r % 10)
                    {
                        min = r % 10;
                    }
                }
                r /= 10;
            }
            cout << "Max: " << max << "\nMin: " << min << endl;
            break;

        case 5: // OPTION 05: Return the sum of the digits of the number
            cout << "Enter a number" << endl;
            cin >> r;
            n = r;
            c = 0;
            while (r > 0)
            {
                c += 1;
                r /= 10;
            }
            r = n;
            s = 0;
            for (int i = 0; i < c; i++)
            {
                s += r % 10;
                r /= 10;
            }
            cout << "Sum of digit: " << s << endl;
            break;

        case 6: // OPTION 06: Return the product of the odd digits
            cout << "Enter a number" << endl;
            cin >> r;
            n = r;
            c = 0;
            while (r > 0)
            {
                c += 1;
                r /= 10;
            }
            r = n;
            s = 1;
                for (int i = 0; i <= c; i++)
                {
                    if ((r % 10) % 2 == 1)
                    {
                        s *= r % 10;
                    }
                    r /= 10;
                }
            cout << "Product of the odd digits: " << s << endl;
            break;

        case 7: // OPTION 07: Calculate the inverted version of the
            cout << "Enter a number" << endl;
            cin >> r;
            n = r;
            c = 0;
            while (r > 0)
            {
                c += 1;
                r /= 10;
            }
            r = n;
            for (int i = 0; i < c; i++)
            {
                cout << r % 10;
                r /= 10;
            }
            cout << endl;
            break;
            break;
        }
        // Request to user continue or not
        cout << "\nDo you want continue [Y|N]? " << endl;

        cin >> cont;
    } while (cont == 'y' || cont == 'Y');
    cout << "\n The program is over!" << endl;

    return 0;
}