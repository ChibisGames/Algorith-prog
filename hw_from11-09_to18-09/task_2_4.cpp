/*
    calculator of the cost of goods, taking into account the company's policy
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float c; // cost of product
    char p; // type of product
    unsigned int cl, tr; // types of client and transaction
    float s; // sale
    
    cout << "Enter cost of product:" << endl;
    cin >> c;

    cout << "Enter type of product:\n\
    1) A\n\
    2) B\n\
    3) C" << endl;
    cin >> p;

    cout << "Enter type of client (as number):\n\
    1) Great\n\
    2) Good\n\
    3) Medium\n\
    4) Bad" << endl;
    cin >> cl;

    cout << "Enter type of transaction (as number):\n\
    1) Payment in cash\n\
    2) payment by bank check\n\
    3) payment on credit" << endl;
    cin >> tr;

    switch(cl){
        case 1: 
            switch(p){
                case 'A': 
                    s = 40;
                    break;
                case 'B': 
                    s = 30;
                    break;
                case 'C': 
                    s = 20;
                    break;
            };
            break;
        case 2: 
            switch(p){
                case 'A': 
                    s = 30;
                    break;
                case 'B': 
                    s = 20;
                    break;
                case 'C': 
                    s = 10;
                    break;
            };
            break;
        case 3: 
            switch(p){
                case 'A': 
                    s = 20;
                    break;
                case 'B': 
                    s = 10;
                    break;
                case 'C': 
                    s = 0;
                    break;
            };
            break;
        case 4: 
            switch(p){
                case 'A': 
                    s = 0;
                    break;
                case 'B': 
                    s = -5;
                    break;
                case 'C': 
                    s = -10;
                    break;
            };
            break;
    }

    int n, i; // for future (check case 2 and case 3)
    switch(tr){
        case 1:
            c = c * (1 - s / 100);
            break;
        case 2: // n - number of contributions, i -the interest rate
            cout << "Enter number of contributions:" << endl;
            cin >> n;
            cout << "Enter the interest rate:" << endl;
            cin >> i;
            c *= 1 + n * i / 100;
            c *= 1 - s / 100;
            break;
        case 3: //n - number of contributions, i - the interest rate
            cout << "Enter the number of installment payments (from 1 to 6 payments):" << endl;
            cin >> n;
            cout << "Enter the type of loan:\n\
            1) Platinum\n\
            2) Business" << endl;
            cin >> i;
            switch(i){
                case 1: 
                    i = 5;
                    break;
                case 2: 
                    i = 2;
                    break;
            }
            c *= pow(1 + i / 100, n);
            c *= 1 - s / 100;
            break;
    }

    cout << "Product's cost: " << c;

    return 0;
}