#ifndef ZADANIE13_2_LION_H
#define ZADANIE13_2_LION_H

#include "Animal.h"

class Lion : public Animal {

public:
    Lion(int weight = 400, string name = "Leo");
    void who();
};

#endif
