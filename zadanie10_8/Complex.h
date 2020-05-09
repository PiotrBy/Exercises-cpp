#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;

class Complex {
public:
    explicit Complex(float = 0.0, float = 0.0);

    Complex operator+(const Complex &) const;

    Complex operator-(const Complex &) const;

    friend ostream &operator<<(ostream &, const Complex &);

    friend istream &operator>>(istream &, Complex &);

    friend Complex operator*(const Complex &, const Complex &);

    bool operator==(const Complex &);

    bool operator!=(const Complex &);

private:
    float real;

    float imaginary;
};

#endif