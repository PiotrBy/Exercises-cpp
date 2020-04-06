#include <iostream>
#include "Rational.h"

using namespace std;

int main() {
    Rational number1(-1,3);
    Rational number2(1,6);
    Rational added = number1.add(number2);
    Rational subtracted = number1.subtract(number2);
    Rational multiplied = number1.multiply(number2);
    Rational divided = number1.divide(number2);


    cout << "Wynik dodawania to : " << added.toString() << ", a w zapisie dziesietnym to : " << added.toDecimalFloat()
         << endl;
    cout << "Wynik odejmowania to : " << subtracted.toString() << ", a w zapisie dziesietnym to : "
         << subtracted.toDecimalFloat() << endl;
    cout << "Wynik mnożenia to : " << multiplied.toString() << ", a w zapisie dziesietnym to : "
         << multiplied.toDecimalFloat() << endl;
    cout << "Wynik dzielenia to : " << divided.toString() << ", a w zapisie dziesietnym to : "
         << divided.toDecimalFloat() << endl;

    return 0;
}
