#include "CargoShip.h"

using namespace std;

CargoShip::CargoShip(string _name, int _capacity) {
    setCapacity(_capacity);
    setName(_name);
}

int CargoShip::getCapacity() {
    return capacity;
}

void CargoShip::setCapacity(int _capacity) {
    capacity = _capacity;
}

void CargoShip::print() {
    cout << "I am a CargoShip, my name is: " << getName() << endl;
    cout << "I can take up to: " << capacity << " tons" << endl;
}
