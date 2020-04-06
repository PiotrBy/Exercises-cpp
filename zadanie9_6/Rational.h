//
// Created by piotr on 03.04.2020.
//

#ifndef ZADANIE9_6_RATIONAL_H
#define ZADANIE9_6_RATIONAL_H

#include <iostream>

using namespace std;

class Rational {
    int numerator;
    int denominator;
    void reduceFraction();
    int GCD();

public:
    Rational(int numerator = 1, int denominator = 2);

    int getNumerator();

    int getDenominator();

    Rational add(Rational number);

    Rational subtract(Rational number);

    Rational multiply(Rational number);

    Rational divide(Rational number);

    string toString();

    float toDecimalFloat();
};


#endif //ZADANIE9_6_RATIONAL_H
