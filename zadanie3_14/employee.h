//
// Created by piotr on 28.03.2020.
//

#ifndef ZADANIE3_15_EMPLOYEE_H
#define ZADANIE3_15_EMPLOYEE_H

#include <iostream>
using namespace std;


class employee{
private:
    string firstName;
    string lastName;
    int monthlySalary;
    

public:
    employee(string = "Stefan", string = "Batory", int = 2 );

    string getFirstName();
    void setFirstName(string firstName);
    string getLastName();
    void setLastName(string lastName);
    int getMonthlySalary();
    void setMonthlySalary(int monthlySalary);

    void print();
};


#endif //ZADANIE3_15_EMPLOYEE_H
