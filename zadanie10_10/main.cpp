#include <iostream>
#include "RationalNumber.h"

using namespace std;

int main() {
    RationalNumber x(1, 15);
    RationalNumber y(2, -7);
    RationalNumber z;
    z = x + y;
    z.Show();
    z = x - y;
    z.Show();
    z = x * y;
    z.Show();
    z = x / y;
    z.Show();

    bool relation1 = x > y;
    bool relation2 = x < y;
    bool relation3 = x == y;

    cout << "x > y --> " << relation1 << endl;
    cout << "x < y --> " << relation2 << endl;
    cout << "x = y --> " << relation3 << endl;

}