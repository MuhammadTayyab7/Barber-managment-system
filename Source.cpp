#include<iostream>
#include<string>
#include"Person.h"
#include"Employee.h"
#include"BarberSystem.h"
#include"BillingSystem.h"
#include"CustomerInfo.h"
#include"Customer.h"
using namespace std;

int Employee::EmployeeCount;
int Employee::inc1;
int Customer::custCount;
int Customer::inc1;

int main()
{
	cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
	cout << "                                                                                                                        \n";
	cout << "                                            BARBER MANAGMENT SYSTEM\n";
	cout << "                                                                                                                        \n";
	cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
	BarberSystem::instance().system();
    CustomerInfo::instance().WriteFile("input.txt");

	return 0;
}
