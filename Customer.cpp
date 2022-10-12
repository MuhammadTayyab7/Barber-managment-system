#include "Customer.h"

Customer::Customer(string q, string w, string e) :Person(q, w, e)
{
    this->Payment = 0.0;
    this->custCount++;
    this->billStatus = false;
    string x, y, z;
    x = 48; y = 48; z = 48;
    this->ID = "Customer";
    ID = ID.append(x);
    if (custCount > 0 && custCount <= 9)
    {
        ID = ID.append(y);
        z = 48 + custCount;
        ID = ID.append(z);
    }
    if (custCount > 9)
    {
        inc1++;
        y = 48 + 1;
        ID = ID.append(y);
        z = 48 + inc1 - 1;
        ID = ID.append(z);
    }
}

Customer::~Customer()
{
	custCount--;
}

void Customer::print()
{
	Person::print();
	if(billStatus==false)
		cout << "Bill Status: Unpaid" << endl;
	else
		cout<< "Bill Status: Paid" << endl;
}

void Customer::setBill(bool x)
{
	billStatus = x;
}

bool Customer::getBill()
{
	return billStatus;
}

void Customer::setCount(int x)
{
	custCount = x;
}

int Customer::getCount()
{
	return custCount;
}

void Customer::setPayment(double payment)
{
    this->Payment = this->Payment + payment;
}

double Customer::getPayment()
{
    return this->Payment;
}
