//
// Created by piotr on 19.04.2020.
//

#ifndef ZADANIE9_8_DATE_H
#define ZADANIE9_8_DATE_H


class Date {
public:
    explicit Date(int = 1, int = 1, int = 2000); // default constructor
    void print();

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
};

#endif //ZADANIE9_8_DATE_H
