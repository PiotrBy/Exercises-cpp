#include <iostream>
#include "Date.h"

int main() {
    Date today(1, 2313);              //utworzenie obiektu o nazwie today (dzien, miesiac, rok(ustawiony domyslnie na 2020))
    today.displayDate();                    //wypisanie daty
    today.setMonth(3);                 //zamiana miesiaca na 3
    today.displayDate();                    //wypisanie daty ze zmienionym miesiacem
    today.setMonth(50000);             //zmiana miesiaca na 50000
    today.displayDate();                    //wypisanie nowej daty po zmianie miesiaca z poza zakresu
    return 0;
}
