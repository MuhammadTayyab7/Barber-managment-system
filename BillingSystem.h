#pragma once
#include<iostream>
#include "CustomerInfo.h"
#include<string>
using namespace std;
class BillingSystem
{
	double Discount;
	BillingSystem();
	~BillingSystem();
public:
	static BillingSystem& instance();
	void PrintBill(string)const;
	void PayBill(string);
	void PayedCustomerInfo(string);
	double discount(string);
};

