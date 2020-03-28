//
// Created by piotr on 28.03.2020.
//

#include "employee.h"
using namespace std;


employee::employee(string first, string last, int month) {
    firstName = first;
    lastName = last;
    monthlySalary = month;

}
void employee::print() {
    cout << "\nName : " << firstName;
    cout << "\nLast name : " << lastName;
    cout << "\nMonthly salary : " << monthlySalary << "\n";
}
string employee::getFirstName(){
    return firstName;
}
void employee::setFirstName(string _name){
    firstName = _name;
}
string employee::getLastName() {
    return lastName;
}
void employee::setLastName(string _lastName) {
    lastName = _lastName;
}
int employee::getMonthlySalary() {
    return monthlySalary;
}
void employee::setMonthlySalary(int _monthlySalary) {
    if (_monthlySalary <= 0){
        monthlySalary = 0;
    }else{
        monthlySalary = _monthlySalary;
    }
}