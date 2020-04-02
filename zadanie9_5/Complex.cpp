//
// Created by piotr on 02.04.2020.
//
#include <iostream>

using namespace std;

#include "Complex.h"

Complex::Complex(double _realPart, double _imaginaryPart) {
    realPart = _realPart;
    imaginaryPart = _imaginaryPart;

}

double Complex::getRealPart() {
    return realPart;
}

double Complex::getImaginaryPart() {
    return imaginaryPart;
}

Complex Complex::add(Complex number) {
    Complex result(realPart + number.getRealPart(), imaginaryPart + number.getImaginaryPart());
    return result;
}

Complex Complex::subtract(Complex number) {
    Complex result(realPart - number.getRealPart(), imaginaryPart - number.getImaginaryPart());
    return result;
}

Complex Complex::multiply(Complex number) {
    Complex result(realPart * number.getRealPart() - imaginaryPart * number.getImaginaryPart(),
                   realPart * number.getImaginaryPart() + number.getRealPart() * imaginaryPart);
    return result;
}

Complex Complex::divide(Complex number) {
    if (number.getRealPart() != 0 || number.getImaginaryPart() != 0) {
        Complex result((imaginaryPart * number.getImaginaryPart() + realPart * number.getRealPart()) /
                       (number.getImaginaryPart() * number.getImaginaryPart() +
                        number.getRealPart() * number.getRealPart()),
                       (number.getImaginaryPart() * realPart - number.getRealPart() * imaginaryPart) /
                       (number.getImaginaryPart() * number.getImaginaryPart() +
                        number.getRealPart() * number.getRealPart()));
        return result;
    } else {
        cout << "Błąd dzielenia" << endl;
    }
}

string Complex::toString() {
    return "(" + to_string(realPart) + ", " + to_string(imaginaryPart) + ")";
}

