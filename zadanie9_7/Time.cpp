#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <unistd.h>
#include "Time.h"

using namespace std;

Time::Time(int hour, int minute, int second) {
    setTime(hour, minute, second);
}

void Time::setTime(int h, int m, int s) {
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h) {
    if (h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("hour must be 0-23");
}

void Time::setMinute(int m) {
    if (m >= 0 && m < 60)
        minute = m;
    else
        throw invalid_argument("minute must be 0-59");
}

void Time::setSecond(int s) {
    if (s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("second must be 0-59");
}

unsigned int Time::getHour() const {
    return hour;
}

unsigned Time::getMinute() const {
    return minute;
}

unsigned Time::getSecond() const {
    return second;
}

bool Time::isEndOfTheHours() {
    return isEndOfTheMinute() && getMinute() == 59;
}

bool Time::isEndOfTheMinute() {
    return getSecond() == 59;
}

bool Time::isEndOfTheDay() {
    return isEndOfTheHours() && isEndOfTheHours() && getHour() == 23;
}

void Time::tick() {
    if (isEndOfTheMinute()) {
        if (isEndOfTheHours()) {
            if (isEndOfTheDay()) {
                hour = 0;
                minute = 0;
                second = 0;
            } else {
                hour++;
                minute = 0;
                second = 0;
            }
        } else {
            minute++;
            second = 0;
        }
    } else {
        second++;
    }
}

void Time::printStandard() {
    if (hour >= 0 && hour <= 11) {
        cout << hour << ":";
        if (minute < 10) {
            cout << "0";
        }
        cout << minute << ":";
        if (second < 10) {
            cout << "0";
        }
        cout << second << " am" << endl;
    } else {
        cout << hour % 12 << ":";
        if (minute < 10) {
            cout << "0";
        }
        cout << minute << ":";
        if (second < 10) {
            cout << "0";
        }
        cout << second << " pm" << endl;
    }
}