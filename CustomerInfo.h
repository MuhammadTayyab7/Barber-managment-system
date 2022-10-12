#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"Customer.h"
using namespace std;

class CustomerInfo
{
	Customer* ptr;
	int size;
	CustomerInfo();
	~CustomerInfo();
public:
	
	void ReadFile(string filename);//it will read data from file
	void WriteFile(string filename);//it will write data in the file
	void addCustomer(Customer& obj);
	Customer* SearchID(const string ); //getCustomer
	static CustomerInfo& instance();
	void displayAllCustomers();
};

