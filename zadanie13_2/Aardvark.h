#ifndef ZADANIE13_2_AARDVARK_H
#define ZADANIE13_2_AARDVARK_H
#include "Animal.h"

class Aardvark : public Animal {

public:
    Aardvark(int weight = 50, string name = "Algernon");
    void who();
};

#endif
