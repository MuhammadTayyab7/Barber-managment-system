#pragma once
#include "Person.h"
#include<fstream>
class Employee :public Person
{
    int size;
    int age;
    string CNIC;
    string experience;
    static int EmployeeCount;
    bool fired;
    static int inc1;
    Employee* ptr;
   
public:
     Employee();
    ~Employee();
    Employee(string name, string PhoneNo, string date,
        int age, string CNIC, string experience);
    void print();
    void firedEmployee();
    void SetfiredEmployee(bool);
    bool getfiredEmployee();
    void SetEmployeeCount(int);
    void displayAllEmployee();
    void addEmployee(Employee& obj);
    Employee* SearchID(const string);
};