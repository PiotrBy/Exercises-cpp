#ifndef ZADANIE13_2_ANIMAL_H
#define ZADANIE13_2_ANIMAL_H

#include <iostream>

using namespace std;

class Animal {
    protected:
        string name;
        int weight;

        void who();

    public:
        Animal(int = 1, string = "A");
};

#endif
