#ifndef ZADANIE13_3_ANIMAL_H
#define ZADANIE13_3_ANIMAL_H

#include <iostream>

using namespace std;

class Animal {
protected:
    string name;
    int weight;
public:
    Animal(int = 1, string = "A");

    void who();
};

#endif
