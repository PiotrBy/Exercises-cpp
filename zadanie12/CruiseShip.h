#ifndef ZADANIE12_CRUISESHIP_H
#define ZADANIE12_CRUISESHIP_H

#include "Ship.h"

class CruiseShip : public Ship {
    int maxOfPassengers;
public:
    CruiseShip(string name, int maxOfPassengers);

    void print();

    int getMaxOfPassengers();

    void setMaxOfPassengers(int maxOfPassenger);

};


#endif