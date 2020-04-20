//
// Created by piotr on 19.04.2020.
//

#include <iostream>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;
// Date constructor (should do range checking)
Date::Date( int m, int d, int y )
        : month( m ), day( d ), year( y )
{
}

void Date::print()
{
    cout << month << '/' << day << '/' << year;
}