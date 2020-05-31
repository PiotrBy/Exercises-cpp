#ifndef ZADANIE12_SHIP_H
#define ZADANIE12_SHIP_H

#include <iostream>

using namespace std;

class Ship {
    string name;
    string yearOfBuild;
public:
    explicit Ship(string name = "boat", string yearOfBuild = "1425");

    virtual void print();

    string getName();

    string getYearOfBuild();

    void setName(string name);

    void setYearOfBuild(string yearOfBuild);

};


#endif
