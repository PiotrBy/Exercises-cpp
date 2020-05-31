#include <iostream>
using namespace std;

int main() {
    unsigned int ile = 1000;

    bool Sito[ile];

    for (int i = 0; i < ile; i++) {
        Sito[i] = true;
    }
    for (int i = 2; i * i <= ile; i++) {
        if (Sito[i]) {
            for (int j = i * i; j <= ile; j += i) {
                Sito[j] = false;
            }
        }
    }
    for (int i = 2; i < ile; i++) {
        if (Sito[i]) {
            cout << i << endl;
        }
    }

}