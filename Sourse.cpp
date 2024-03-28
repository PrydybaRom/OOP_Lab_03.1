
#include "Rational.h"
#include <iostream>

using namespace std;

int main() {
    Rational r1(3, 5);
    Rational r2;

    cout << "Initial values of r1 and r2:" << endl;
    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;

    cout << "Enter values for r2:" << endl;
    cin >> r2;

    cout << "Values of r1 and r2 after reading:" <<endl;
    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;


    if (r1 > r2)
        cout << "r1 is greater than r2" << endl;
    else if (r1 < r2)
        cout << "r1 is less than r2" << endl;
    else
        cout << "r1 is equal to r2" << endl;

    return 0;
}