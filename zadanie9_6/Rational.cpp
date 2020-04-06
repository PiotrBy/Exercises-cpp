//
// Created by piotr on 03.04.2020.
//

#include "Rational.h"

Rational::Rational(int _numerator, int _denominator) {
    numerator = _numerator;
    denominator = _denominator;
}

int Rational::getNumerator() {
    return numerator;
}

int Rational::getDenominator() {
    return denominator;
}

Rational Rational::add(Rational number) {
    Rational result(number.getNumerator() * denominator + number.getDenominator() * numerator,
                    denominator * number.getDenominator());
    result.reduceFraction();
    return result;
}

Rational Rational::subtract(Rational number) {
    Rational result(number.getDenominator() * numerator - number.getNumerator() * denominator,
                    denominator * number.getDenominator());
    result.reduceFraction();
    return result;
}

Rational Rational::multiply(Rational number) {
    Rational result(number.getNumerator() * numerator, number.getDenominator() * denominator);
    result.reduceFraction();
    return result;
}

Rational Rational::divide(Rational number) {
    Rational result(numerator * number.getDenominator(), denominator * number.getNumerator());
    result.reduceFraction();

    return result;
}

string Rational::toString() {
    if (denominator == 1) {
        return to_string(numerator);
    }
    if (denominator < 0 && numerator < 0 || denominator < 0 && numerator > 0){
        numerator = -numerator;
        denominator = -denominator;
    }

    return to_string(numerator) + "/" + to_string(denominator);
}

float Rational::toDecimalFloat() {
    float result = (float) (numerator) / (float) (denominator);
    return result;
}

/**
 * @param number
 * @return greatest common divisor of given number
 */
int Rational::GCD() {
    int numeratorCopy = abs(numerator);
    int denominatorCopy = abs(denominator);
    while (numeratorCopy != denominatorCopy)
        if (numeratorCopy > denominatorCopy)
            numeratorCopy -= denominatorCopy;
        else
            denominatorCopy -= numeratorCopy;
    return numeratorCopy;
}

void Rational::reduceFraction() {
    int gcd = GCD();
    numerator = numerator / gcd;
    denominator = denominator / gcd;
}