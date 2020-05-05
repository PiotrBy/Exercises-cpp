#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal(int _weight, string _name) {
    name = _name;
    weight = _weight;
}

void Animal::who() {
    cout << name << " have " << weight << " lbs" << endl;
}
