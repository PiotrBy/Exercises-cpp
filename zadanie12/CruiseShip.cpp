#include "CruiseShip.h"

CruiseShip::CruiseShip(string _name, int _maxOfPassengers) {
    setMaxOfPassengers(_maxOfPassengers);
    setName(_name);
}

void CruiseShip::print() {
    cout << "I am a CruiseShip, my name is: " << getName() << endl;
    cout << "I can take up to: " << maxOfPassengers << " passengers" << endl;
}

void CruiseShip::setMaxOfPassengers(int _maxOfPassenger) {
    maxOfPassengers = _maxOfPassenger;
}

int CruiseShip::getMaxOfPassengers() {
    return maxOfPassengers;
}
