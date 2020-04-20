//
// Created by piotr on 19.04.2020.
//

#ifndef ZADANIE9_8_DATE_H
#define ZADANIE9_8_DATE_H


class Date {
public:
    Date(unsigned int month = 12,unsigned int day = 25,unsigned int year = 2000); // default constructor
    void print();
    //set functions:
    void setDay(unsigned int);
    void setMonth(unsigned int);
    void setYear(unsigned int);
    void setDate(unsigned int,unsigned int,unsigned int);
    //get functions:
    unsigned int getDay();
    unsigned int getMonth();
    unsigned int getYear();
    bool isEndOfMonth();
    bool isEndOfYear();

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
};

#endif //ZADANIE9_8_DATE_H
