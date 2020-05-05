#include "Aardvark.h"

Aardvark::Aardvark(int _weight, string _name) {
    name = _name;
    weight = _weight;
}

void Aardvark::who() {
    cout << name << " have " << weight << " lbs" << endl;
}