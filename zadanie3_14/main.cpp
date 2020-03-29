#include <iostream>
#include "employee.h"
using namespace std;

int main() {

    employee hetmanWielkiKoronny;                               //utworzenie obiektu klasy employee
    hetmanWielkiKoronny.print();                                //wypisanie imienia nazwiska i wypłaty
    hetmanWielkiKoronny.setMonthlySalary(-50000);   //zmiana wypłaty na liczbe ujemna
    hetmanWielkiKoronny.print();                                //ponowne wypisanie imienia nazwiska i wyplaty

    employee KazimierzWielki;                                   //utworzenie obiektu
    employee MieszkoI;                                          //utworzenie obiektu

    int yearlySalaryKazimierz = 12*(KazimierzWielki.getMonthlySalary());                //roczna wypłata
    int yearlySalaryMieszko = 12*(MieszkoI.getMonthlySalary());                         //roczna wypłata
    cout << "\nWypłata Kazimierza to " << yearlySalaryKazimierz << " skrzynie złota";   //roczna wypłata
    cout << "\nWypłata Mieszka to " <<yearlySalaryMieszko << " grosze polskich" <<endl; //roczna wypłata

    double raiseKazimierz = 1.1*yearlySalaryKazimierz;                                              //roczna wypłata po podwyżce
    double raiseMieszko = 1.1*yearlySalaryMieszko;                                                  //roczna wypłata po podwyżce
    cout << "\nWypłata Kazimierza po podwyżce to już " << raiseKazimierz << " skrzyń złota"<< endl; //roczna wypłata po podwyżce
    cout << "Wypłata Mieszka po podwyżce to już "<< raiseMieszko << " groszy polskich" <<endl;      //roczna wypłata po podwyżce

    return 0;
}


