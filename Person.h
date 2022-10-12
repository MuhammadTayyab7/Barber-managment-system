#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person
{
protected:
	string name;
	string phoneNO;
	string date;
	string ID;
	
public:
	Person(string name = "User", string phone = "0000", string date = "1/1/2000",string ID= "--");
	~Person();
	void setName(string);
	void setPhoneNO(string);
	void setDate(string);
	virtual void print() = 0;
	string getName()const;
	string getPhoneNO()const;
	string getDate()const;
	string getID();
	void setID(string x);
};

