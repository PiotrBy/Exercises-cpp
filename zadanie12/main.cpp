#include <iostream>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

int main() {
    Ship *ships[3] = {
            new Ship("Oktawius", "1762"),
            new CruiseShip("Lady Lovinbond", 13),
            new CargoShip("Mary Celeste", 37500),
    };

    for (int i = 0; i < 3; i++) {
        ships[i]->print();
    }

    return 0;
}