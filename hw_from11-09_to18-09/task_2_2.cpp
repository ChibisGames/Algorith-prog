/*
    A person standing on the edge of a cliff with a height of H throws
    a stone at an angle ? to the horizon with an initial velocity V.Write a program that
    determines the position of the stone based on the time t entered by the user
    (height from the bottom of the cliff x(t) and distance to the edge of the cliff y(t)).
*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double g, h, v, a, t, x, y;
    g = 9.81;

    cout << "Enter h: ";
    cin >> h;
    cout << "Enter v: ";
    cin >> v;
    cout << "Enter a (in radians): ";
    cin >> a;

    t = v * sin(a) / g;
    t *= (1 + sqrt(1 + 2 * g * h / (pow(v, 2) * pow(sin(a), 2))));
    cout << "Stone flight time: " << t << endl;

    x = v * t * cos(a);
    cout << "Height from cliff bottom: " << x << endl;

    y = h + v * t * sin(a) - 1/2 * g * pow(t, 2);
    cout << "Distance from cliff edge: " << y << endl;

    return 0;
}