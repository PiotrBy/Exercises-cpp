#ifndef ZADANIE13_3_LION_H
#define ZADANIE13_3_LION_H

#include "Animal.h"

class Lion : public Animal {

public:
    Lion(int weight = 400, string name = "Leo");

    void who();
};

#endif
