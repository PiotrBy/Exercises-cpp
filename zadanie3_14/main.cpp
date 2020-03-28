#include <iostream>
#include "employee.h"
using namespace std;

int main() {

    employee hetmanWielkiKoronny;                               //utworzenie obiektu klasy employee
    hetmanWielkiKoronny.print();                                //wypisanie imienia nazwiska i wypłaty
    hetmanWielkiKoronny.setMonthlySalary(-50000);   //zmiana wypłaty na liczbe ujemna
    hetmanWielkiKoronny.print();                                //ponowne wypisanie imienia nazwiska i wyplaty

    employee KazimierzWielki;
    employee MieszkoI;

    int yearlySalaryKazimierz = 12*(KazimierzWielki.getMonthlySalary());
    int yearlySalaryMieszko = 12*(MieszkoI.getMonthlySalary());
    cout << "\nWypłata Kazimierza to " << yearlySalaryKazimierz << " skrzynie złota";
    cout << "\nWypłata Mieszka to " <<yearlySalaryMieszko << " grosze polskich" <<endl;

    float raiseKazimierz = 1.1*yearlySalaryKazimierz;
    float raiseMieszko = 1.1*yearlySalaryMieszko;
    cout << "\nWypłata Kazimierza po podwyżce to już " << raiseKazimierz << " skrzyń złota"<< endl;
    cout << "Wypłata Mieszka po podwyżce to już "<< raiseMieszko << " groszy polskich" <<endl;

    return 0;
}


