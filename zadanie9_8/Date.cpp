//
// Created by piotr on 19.04.2020.
//

#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(unsigned int month, unsigned int day, unsigned int year) {
    setDate(month, day, year);
}

void Date::setDate(unsigned int m, unsigned int d, unsigned int y) {
    setMonth(m);
    setYear(y);
    setDay(d);
}

unsigned int Date::getMonth() {
    return month;
}

unsigned int Date::getDay() {
    return day;
}

unsigned int Date::getYear() {
    return year;
}


void Date::print() {
    cout << day << '/' << month << '/' << year << endl;
}

void Date::setMonth(unsigned int _month) {
    if (_month > 0 && _month <= 12)
        month = _month;
    else
        throw invalid_argument("month must be 1-12");
}

void Date::setYear(unsigned int _year) {
    year = _year;
}

void Date::setDay(unsigned int _day) {
    if (getMonth() == 1 || getMonth() == 3 || getMonth() == 5 || getMonth() == 7 || getMonth() == 8 ||
        getMonth() == 10 || getMonth() == 12)
        if (_day > 0 && _day <= 31)
            day = _day;
        else
            throw invalid_argument("January, march, may, july, august, october and december have 31 days");
    if (getMonth() == 4 || getMonth() == 6 || getMonth() == 9 || getMonth() == 11)
        if (_day > 0 && _day <= 30)
            day = _day;
        else
            throw invalid_argument("April, june, september and november have 30 days");
    if (getMonth() == 2) {

        if ((getYear() % 4 == 0 && getYear() % 100 != 0) || getYear() % 400 == 0) {
            if (_day > 0 && _day <= 29)
                day = _day;
            else
                throw invalid_argument("February in leap year have 29 days");
        } else {
            if (_day > 0 && _day <= 28)
                day = _day;
            else
                throw invalid_argument("February have 28 days");
        }
    }
}

bool Date::isEndOfMonth() {
    if (getMonth() == 1 || getMonth() == 3 || getMonth() == 5 || getMonth() == 7 || getMonth() == 8 ||
        getMonth() == 10 || getMonth() == 12) {
        return getDay() == 31;
    } else if (getMonth() == 4 || getMonth() == 6 || getMonth() == 9 || getMonth() == 11) {
        return getDay() == 30;
    } else {
        if ((getYear() % 4 == 0 && getYear() % 100 != 0 )|| getYear() % 400 == 0) {
            return getDay() == 29;
        } else {
            return getDay() == 28;
        }
    }
}

bool Date::isEndOfYear() {
    return getMonth() == 12 && isEndOfMonth();
}



