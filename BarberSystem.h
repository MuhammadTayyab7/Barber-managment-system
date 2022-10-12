#pragma once
#include<iostream>
#include<string>
#include"BillingSystem.h"
#include"Person.h"
#include"Employee.h"
#include"CustomerInfo.h"
#include"Customer.h"
using namespace std;
class BarberSystem
{
private:
	Employee obj_employee;
	BarberSystem()
	{}
	~BarberSystem()
	{

	}
public:
	
	void system();
	void main();
	void Customer_Menu();
	void Employee_Menu();
	void Barber_Menu();
	void Hair_Cut();
	void Hair_Styling();
	void Hair_Colour();
	void Groom();
	static BarberSystem& instance();

};

