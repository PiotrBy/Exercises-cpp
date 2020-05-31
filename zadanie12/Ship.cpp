#include "Ship.h"

using namespace std;

Ship::Ship(string name, string yearOfBuild) {
    setName(name);
    setYearOfBuild(yearOfBuild);
}

void Ship::print() {
    cout << "I am a Ship, my name is: " << name << "\n" << "I was built in: " << yearOfBuild << endl;
}

string Ship::getName() {
    return name;
}

string Ship::getYearOfBuild() {
    return yearOfBuild;
}

void Ship::setName(string _name) {
    name = _name;
}

void Ship::setYearOfBuild(string _yearOfBuild) {
    yearOfBuild = _yearOfBuild;
}
