/*
    The mathematical pendulum
*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double a, k, w, p, t, m_x;

    cout << "Enter amplitude of oscillations: " << endl;
    cin >> a;
    cout << "Enter k: " << endl;
    cin >> k;
    cout << "Enter cyclic frequency: " << endl;
    cin >> w;

    p = asin(1 / k);
    cout << "The value of initial phase of oscillations is " << p << endl;
    t = (M_PI / 2 - p) / w;
    cout << "The value of T is " << t << endl;

    m_x = a * sin(w * t + p);
    cout << "Maximum x is " << m_x;


    return 0;
}