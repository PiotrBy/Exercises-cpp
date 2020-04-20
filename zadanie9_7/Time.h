#ifndef ZADANIE9_7_TIME_H
#define ZADANIE9_7_TIME_H

class Time {
    public:
        explicit Time(int = 0, int = 0, int = 0);

        void setTime(int, int, int);
        void setHour(int);
        void setMinute(int);
        void setSecond(int);

        unsigned int getHour() const;
        unsigned int getMinute() const;
        unsigned int getSecond() const;

        void tick() ;
        void printStandard();

        bool isEndOfTheMinute();
        bool isEndOfTheHours();
        bool isEndOfTheDay();
    private:
        unsigned int hour;
        unsigned int minute;
        unsigned int second;
};
#endif
