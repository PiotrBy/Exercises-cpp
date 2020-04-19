//
// Created by piotr on 19.04.2020.
//

#ifndef ZADANIE9_7_TIME_H
#define ZADANIE9_7_TIME_H

class Time {
public:
    explicit Time(int = 0, int = 0, int = 0); // default constructor
// set functions
    void setTime(int, int, int); // set hour, minute, second
    void setHour(int); // set hour (after validation)
    void setMinute(int); // set minute (after validation)
    void setSecond(int); // set second (after validation)
// get functions
    unsigned int getHour() const; // return hour
    unsigned int getMinute() const; // return minute
    unsigned int getSecond() const; // return second
    void printStandard() const; // output time in standard-time format
private:
    unsigned int hour; // 0 - 23 (24-hour clock format)
    unsigned int minute; // 0 - 59
    unsigned int second; // 0 - 59

};


#endif //ZADANIE9_7_TIME_H
