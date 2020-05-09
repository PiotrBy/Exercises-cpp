// Fig. 10.16: fig10_16.cpp
// Complex class test program.
#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    Complex x;
    Complex y(1, 12);
    Complex z(3.3, 1.1);
    cout << "Podpunkt A " << endl;
    cout << "A więc podaj część rzeczywistą i urojoną np 13.432 [enter] 34.13" << endl;
    cin >> x;
    cout << "Na Twoje życzenie zmienna przyjeła nastepujące wartości : " << x << " Gratulacje !" << endl;

    cout << "Podpunkt B " << endl;
    cout << "X * Z to : " << x * z << endl;

    cout << "Podpunkt C " << endl;
    cout << "Najpierw sprawdźmy czy x jest równe y" << endl;
    if (x != y) {
        cout << "x is not equal to y" << endl;
    } else {
        cout << "x is equal to y" << endl;
    }

    cout << "A teraz spójrzmy czy y jest równe z" << endl;
    if (y == z) {
        cout << "y is equal to z" << endl;
    } else {
        cout << "y is not equal to " << endl;
    }
}