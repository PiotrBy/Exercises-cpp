#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    Complex firstNumber(4, 2);
    Complex secondNumber(8, 3);
    Complex added = firstNumber.add(secondNumber);
    Complex subtracted = firstNumber.subtract(secondNumber);
    Complex multiplied = firstNumber.multiply(secondNumber);
    Complex divided = firstNumber.divide(secondNumber);


    cout << "wynik dodawania = " << added.toString() << endl;
    cout << "wynik odejmowania = " << subtracted.toString() << endl;
    cout << "wynik mnożenia = " << multiplied.toString() << endl;
    cout << "wynik dzielenia = " << divided.toString() << endl;

    return 0;
}
