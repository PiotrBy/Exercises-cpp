#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(float realPart, float imaginaryPart)
        : real(realPart),
          imaginary(imaginaryPart) {
}

Complex Complex::operator+(const Complex &operand2) const {
    return Complex(real + operand2.real,
                   imaginary + operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2) const {
    return Complex(real - operand2.real,
                   imaginary - operand2.imaginary);
}

ostream &operator<<(ostream &out, const Complex &operand) {
    return out << "(" << operand.real << ", " << operand.imaginary << ")";
}

istream &operator>>(istream &in, Complex &operand) {
    in >> operand.real >> operand.imaginary;
    return in;
}

Complex operator*(const Complex &operand, const Complex &operand2) {
    Complex result(operand.real * operand2.real - operand.imaginary * operand2.imaginary,
                   operand.real * operand2.imaginary + operand2.real * operand.imaginary);
    return result;
}

bool Complex::operator==(const Complex &operand) {
    return real == operand.real && imaginary == operand.imaginary;
}

bool Complex::operator!=(const Complex &operand) {
    return real != operand.real || imaginary != operand.imaginary;
}