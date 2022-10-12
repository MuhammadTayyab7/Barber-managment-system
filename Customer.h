#pragma once
#include "Person.h"
class Customer :public Person
{
	double Payment;
	bool billStatus;
	static int custCount;
	static int inc1;
public:
	Customer(string q="Customer", string w="--", string e="1/1/2000");
	~Customer();
	void print();
	void setBill(bool x);
	bool getBill();
	static void setCount(int x);
	static int getCount();
	void setPayment(double);
	double getPayment();
};

