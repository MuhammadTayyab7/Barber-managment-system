#include "BillingSystem.h"

BillingSystem::BillingSystem()
{
	this->Discount = 5;
}

BillingSystem::~BillingSystem()
{
}

void BillingSystem::PrintBill(string id) const
{
	if (CustomerInfo::instance().SearchID(id) != nullptr)
	{
		CustomerInfo::instance().SearchID(id)->print();
		cout << "Bill due: " << BillingSystem::instance().discount(id) << endl;
	}
}

void BillingSystem::PayBill(string id)
{
	CustomerInfo::instance().SearchID(id)->setBill(true);
	cout << id << " has paid the bill.\n";
}

void BillingSystem::PayedCustomerInfo(string id)
{
	if (CustomerInfo::instance().SearchID(id)->getBill() == false) 
	{
		cout << id << " has not paid the bill.\n";
	}
	else
	{
		cout << id << " has paid the bill.\n";
	}
}

double BillingSystem::discount(string id)
{
	double discount;
	discount = CustomerInfo::instance().SearchID(id)->getPayment() -
		(CustomerInfo::instance().SearchID(id)->getPayment() * this->Discount / 100);
	return discount;
}

BillingSystem& BillingSystem::instance()
{
	// TODO: insert return statement here
	static BillingSystem instance;
	return instance;
}