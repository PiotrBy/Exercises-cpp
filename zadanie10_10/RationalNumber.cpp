#include <iostream>
#include "RationalNumber.h"

using namespace std;

RationalNumber::RationalNumber(int _numerator, int _denominator) {
    if (_numerator == 0) {
        numerator = _numerator;
        denominator = _denominator;
    } else {
        if (_denominator > 0) {
            denominator = _denominator;
            numerator = _numerator;
            reduceFraction();
        } else if (_denominator < 0) {
            denominator = -_denominator;
            numerator = -_numerator;
            reduceFraction();
        } else {
            throw invalid_argument("Denominator can not equal to 0");
        }
    }
}

void RationalNumber::reduceFraction() {
    int gcd = GCD();
    numerator = numerator / gcd;
    denominator = denominator / gcd;
}

int RationalNumber::GCD() const {
    int numeratorCopy = abs(numerator);
    int denominatorCopy = abs(denominator);
    while (numeratorCopy != denominatorCopy)
        if (numeratorCopy > denominatorCopy)
            numeratorCopy -= denominatorCopy;
        else
            denominatorCopy -= numeratorCopy;
    return numeratorCopy;
}

int RationalNumber::getNumerator() const {
    return numerator;
}

int RationalNumber::getDenominator() const {
    return denominator;
}

void RationalNumber::Show() const {
    if (getNumerator() == 0) {
        cout << "0\n";
    } else {
        cout << getNumerator() << '/' << getDenominator() << endl;
    }
}

RationalNumber operator+(const RationalNumber &operand, const RationalNumber &operand2) {
    RationalNumber result(operand.numerator * operand2.denominator + operand2.numerator * operand.denominator,
                          operand.denominator * operand2.denominator);
    result.reduceFraction();
    return result;
}

RationalNumber operator-(const RationalNumber &operand, const RationalNumber &operand2) {
    RationalNumber result(operand.numerator * operand2.denominator - operand2.numerator * operand.denominator,
                          operand.denominator * operand2.denominator);
    result.reduceFraction();
    return result;
}

RationalNumber operator*(const RationalNumber &operand, const RationalNumber &operand2) {
    RationalNumber result(operand.numerator * operand2.numerator,
                          operand.denominator * operand2.denominator);
    result.reduceFraction();
    return result;
}

RationalNumber operator/(const RationalNumber &operand, const RationalNumber &operand2) {
    RationalNumber result(operand.numerator * operand2.denominator,
                          operand.denominator * operand2.numerator);
    if (result.numerator == 0) {
        return result;
    } else {
        result.reduceFraction();
        return result;
    }
}

bool operator<(const RationalNumber &operand, const RationalNumber &operand2) {
    if (operand.numerator == 0 && operand2.numerator == 0) {
        return false;
    } else if (operand.numerator == 0) {
        return operand2.numerator > 0;
    } else if (operand2.numerator == 0) {
        return operand.numerator > 0;
    } else if (operand.numerator > 0 && operand2.numerator < 0) {
        return false;
    } else if (operand.numerator < 0 && operand2.numerator > 0) {
        return true;
    } else if (operand.numerator == operand2.numerator) {
        return operand.denominator > operand2.denominator;
    } else if (operand.denominator == operand2.denominator) {
        return operand.numerator < operand2.numerator;
    } else {
        RationalNumber operandVol2(operand.numerator * operand2.denominator,
                                   operand.denominator * operand2.denominator);
        RationalNumber operand2Vol2(operand2.numerator * operand.denominator,
                                    operand2.denominator * operand.denominator);
        if (operandVol2.numerator > 0) {
            return operand2Vol2.numerator > operandVol2.numerator;
        } else {
            return operandVol2.numerator > operand2Vol2.numerator;
        }
    }
}

bool operator>(const RationalNumber &operand, const RationalNumber &operand2) {
    if (operand.numerator == 0 && operand2.numerator == 0) {
        return false;
    } else if (operand.numerator == 0) {
        return operand2.numerator < 0;
    } else if (operand2.numerator == 0) {
        return operand.numerator < 0;
    } else if (operand.numerator > 0 && operand2.numerator < 0) {
        return true;
    } else if (operand.numerator < 0 && operand2.numerator > 0) {
        return false;
    } else if (operand.numerator == operand2.numerator) {
        return operand.denominator < operand2.denominator;
    } else if (operand.denominator == operand2.denominator) {
        return operand.numerator > operand2.numerator;
    } else {
        RationalNumber operandVol2(operand.numerator * operand2.denominator,
                                   operand.denominator * operand2.denominator);
        RationalNumber operand2Vol2(operand2.numerator * operand.denominator,
                                    operand2.denominator * operand.denominator);
        if (operandVol2.numerator < 0) {
            return operand2Vol2.numerator > operandVol2.numerator;
        } else {
            return operandVol2.numerator > operand2Vol2.numerator;
        }
    }
}

bool operator==(const RationalNumber &operand, const RationalNumber &operand2) {
    if (operand.numerator == 0 && operand2.numerator == 0) {
        return true;
    } else return operand.numerator == operand2.numerator && operand.denominator == operand2.denominator;
}
