//
// Created by piotr on 02.04.2020.
//

#ifndef ZADANIE9_5_COMPLEX_H
#define ZADANIE9_5_COMPLEX_H

#include <iostream>
#include <math.h>

using namespace std;

class Complex {
    double realPart;
    double imaginaryPart;
public:
    Complex(double realPart = 0, double imaginaryPart = 0);

    double getRealPart();

    double getImaginaryPart();

    Complex add(Complex number);

    Complex subtract(Complex number);

    Complex multiply(Complex number);

    Complex divide(Complex number);

    string toString();
};


#endif //ZADANIE9_5_COMPLEX_H
