#ifndef ZADANIE10_10_RATIONALNUMBER_H
#define ZADANIE10_10_RATIONALNUMBER_H


class RationalNumber {
    int denominator;
    int numerator;

    void reduceFraction();

    int GCD() const;

public:
    explicit RationalNumber(int numerator = 6, int denominator = 9);

    void Show() const;

    int getNumerator() const;

    int getDenominator() const;

    friend RationalNumber operator+(const RationalNumber &, const RationalNumber &);

    friend RationalNumber operator-(const RationalNumber &, const RationalNumber &);

    friend RationalNumber operator*(const RationalNumber &, const RationalNumber &);

    friend RationalNumber operator/(const RationalNumber &, const RationalNumber &);

    friend bool operator<(const RationalNumber &, const RationalNumber &);

    friend bool operator>(const RationalNumber &, const RationalNumber &);

    friend bool operator==(const RationalNumber &, const RationalNumber &);
};


#endif
