//
// Created by piotr on 19.04.2020.
//
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <unistd.h>
#include "Time.h" // include definition of class Time from Time.h

using namespace std;

// Time constructor initializes each data member
Time::Time(int hour, int minute, int second) {
    setTime(hour, minute, second); // validate and set time
} // end Time constructor
// set new Time value using universal time
void Time::setTime(int h, int m, int s) {
    setHour(h); // set private field hour
    setMinute(m); // set private field minute
    setSecond(s); // set private field second
} // end function setTime
// set hour value
void Time::setHour(int h) {
    if (h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("hour must be 0-23");
} // end function setHour
// set minute value
void Time::setMinute(int m) {
    if (m >= 0 && m < 60)
        minute = m;
    else
        throw invalid_argument("minute must be 0-59");
} // end function setMinute
// set second value
void Time::setSecond(int s) {
    if (s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("second must be 0-59");
} // end function setSecond
// return hour value
unsigned int Time::getHour() const {
    return hour;
} // end function getHour
// return minute value
unsigned Time::getMinute() const {
    return minute;
} // end function getMinute
// return second value
unsigned Time::getSecond() const {
    return second;
} // end function getSecond
// print Time in universal-time format (HH:MM:SS)

void Time::printStandard() const {
    int i;
    int hours = getHour() * 3600;
    int minutes = getMinute() * 60;
    int seconds = getSecond();
    int amountSeconds = hours + minutes + seconds;
    int secPerDay = 86400;
    int secPerHour = 3600;
    int secPerMinute = 60;
    for (i = 0;; i++) {
        hours = ((amountSeconds + i) % secPerDay) / 3600;
        minutes = ((amountSeconds + i) % secPerHour) / 60;
        seconds = ((amountSeconds + i) % secPerMinute);
        if (hours >= 0 && hours <= 12) {
            if (seconds < 10 && minutes < 10) {
                cout << "jest godzina " << hours << ":0" << minutes << ":0" << seconds << " am" << endl;
            } else if (seconds >= 10 && minutes >= 10) {
                cout << "jest godzina " << hours << ":" << minutes << ":" << seconds << " am" << endl;
            } else if (seconds >= 10 && minutes < 10) {
                cout << "jest godzina " << hours << ":0" << minutes << ":" << seconds << " am" << endl;
            } else if (seconds < 10 && minutes >= 10) {
                cout << "jest godzina " << hours << ":" << minutes << ":0" << seconds << " am" << endl;
            }
        } else {
            if (seconds < 10 && minutes < 10) {
                cout << "jest godzina " << hours % 12 << ":0" << minutes << ":0" << seconds << " pm" << endl;
            } else if (seconds >= 10 && minutes >= 10) {
                cout << "jest godzina " << hours % 12 << ":" << minutes << ":" << seconds << " pm" << endl;
            } else if (seconds >= 10 && minutes < 10) {
                cout << "jest godzina " << hours % 12 << ":0" << minutes << ":" << seconds << " pm" << endl;
            } else if (seconds < 10 && minutes >= 10) {
                cout << "jest godzina " << hours % 12 << ":" << minutes << ":0" << seconds << " pm" << endl;
            }
        }
        sleep(1);
    }

} // end function printStandard

