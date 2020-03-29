//
// Created by piotr on 29.03.2020.
//

#include "Date.h"
using namespace std;

Date::Date(int _day, int _month, int _year){
    day = _day;
    year = _year;
    if (_month < 1 || _month > 12){
        month = 1;
    }else {
        month = _month;
    }
}

void Date::displayDate() {
    cout << day << "/" << month << "/" << year << endl;
}

int Date::getDay(){
    return day;
}
void Date::setDay(int _day){
    day = _day;
}

int Date::getMonth(){
    return month;
}
void Date::setMonth(int _month){
    if (_month < 1 || _month > 12){
        month = 1;
    }else {
        month = _month;
    }
}

int Date::getYear(){
    return year;
}
int Date::setYear(int _year){
    year = _year;
}
