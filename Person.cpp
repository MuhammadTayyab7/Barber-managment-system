#include "Person.h"

Person::Person(string name, string phone, string date, string ID)
{
	this -> name = name;
	phoneNO = phone;
	this->date = date;
	this -> ID = ID;

}

Person::~Person()
{
}

void Person::setName(string x)
{
	name = x;
}

void Person::setPhoneNO(string x)
{
	phoneNO = x;
}

void Person::setDate(string x)
{
	date = x;
}

void Person::print()
{
	cout << "ID: " << this->ID << endl;
	cout << "Name: " << this->name << endl;
	cout << "Phone No:" << this->phoneNO<< endl;
	cout << "Date: " << this->date << endl;
}

string Person::getName() const
{
	return name;
}

string Person::getPhoneNO() const
{
	return phoneNO;
}

string Person::getDate() const
{
	return date;
}

string Person::getID()
{
	return ID;
}

void Person::setID(string x)
{
	this->ID = x;
}
