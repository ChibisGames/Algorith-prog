/*
    Develop a calculation program and print it on the terminal
    f(g(x)))
*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double x, f, g;

    cout << "Enter x: ";
    cin >> x;

    if (x > -4 && x < - 1) {
        g = abs(x + 6) / (abs(x + 3) - 3);
    } else if (x > -1 && x < 5) {
        g = sqrt(5 - x) - 2;
    } else if (x >= 5) {
        g = log(x + 10) - 2;
    } else {
        cout << "Impossible to calculate" << endl;
        return 0;
    }
    cout << g;
    if (g < -2) {
        f = abs(g / (1 - g));
    } else if (g >= -2 && g <= 1) {
        f = pow(g + 2, 2);
    } else {
        cout << "Impossible to calculate" << endl;
        return 1;
    }
    cout << "f(g(x)): " << f;
    
    return 0;
}