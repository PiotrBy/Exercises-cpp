#ifndef ZADANIE9_8_DATE_H
#define ZADANIE9_8_DATE_H

class Date {
    public:
        Date(unsigned int month = 12,unsigned int day = 25,unsigned int year = 2000);

        void setDay(unsigned int);
        void setMonth(unsigned int);
        void setYear(unsigned int);
        void setDate(unsigned int,unsigned int,unsigned int);

        unsigned int getDay();
        unsigned int getMonth();
        unsigned int getYear();

        void print();
        void nextDay();
    private:
        unsigned int month;
        unsigned int day;
        unsigned int year;
        bool isEndOfMonth();
        bool isEndOfYear();
};

#endif