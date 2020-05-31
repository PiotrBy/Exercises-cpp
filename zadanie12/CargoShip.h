#ifndef ZADANIE12_CARGOSHIP_H
#define ZADANIE12_CARGOSHIP_H

#include "Ship.h"

class CargoShip : public Ship {
    int capacity;
public:
    CargoShip(string name, int capacity);

    int getCapacity(void);

    void setCapacity(int capacity);

    void print();
};

#endif
