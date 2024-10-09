/*
    a program that calculates property tax (in thousands of rubles) 
    for a land plot (measured in square meters) in 4 categories
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float t = 0; // sum of tax
    unsigned int ch = 0; // user's choice
    cout << "The answer is a positive integer!" << endl;
    cout << "Dial the number of square meters. meters of types of coverage per land plot:" << endl;
    cout << "1) Meters with a roof" << endl;
    cin >> ch;
    t += 5 * ch;
    cout << "2) meters without a roof" << endl;
    cin >> ch;
    t += 3 * ch;
    cout << "3) Meters with a garden" << endl;
    cin >> ch;
    t += ch;


    cout << "Select the type of materials:\n\
    1) It is made of high quality material\n\
    2) It is made of adobe\n\
    3) It is made of another material" << endl;
    cin >> ch;
    if(ch == 1){
        t *= 1.15;
    }else if(ch == 2){
        t *= 1.10;
    }else if(ch == 3){
        t *= 1.05;
    }else{
        t = pow(2, 2 * 8); // "For pampering"
    }


    cout << "Availability of basic services (availability of water and sewerage):\n\
    1) Exist\n\
    2) No exist" << endl;
    cin >> ch;
    if(ch == 1){
        t += 2.5;
    }


    cout << "Number of floors of the building:\n\
    1) There are 2 floors\n\
    2) There are 3 floors\n\
    3) There are 4 floors \n\
    4) More then 4 floors" << endl;
    cin >> ch;
    if(ch == 1){
        t *= 1.10;
    }else if(ch == 2 || ch == 3){
        t *= 1.15;
    }else if(ch == 4){
        t *= 1.20;
    }else{
        t = pow(2, 2 * 8); // "For pampering"
    }


    cout << "Sum of tax:\t" << t;


    return 0;
}