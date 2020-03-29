//
// Created by piotr on 29.03.2020.
//

#ifndef ZADANIE3_15_DATE_H
#define ZADANIE3_15_DATE_H

#include <iostream>
using namespace std;

class Date {

    int day;
    int month;
    int year;


public:
    Date(int = 1 , int = 1 , int = 2020 );

    int getDay();
    void setDay(int day);

    int getMonth();
    void setMonth(int month);

    int getYear();
    int setYear(int year);

    void displayDate();

};


#endif //ZADANIE3_15_DATE_H
