#include "Employee.h"
Employee::Employee()
{
	this->age = 0;
	this->size = 0;
	this->ptr = nullptr;
	this->fired = false;
}
Employee::Employee(string name, string PhoneNo,
	string date, int age, string CNIC, string experience) :Person(name, PhoneNo, date)
{
	this->EmployeeCount++;
	this->age = age;
	this->CNIC = CNIC;
	this->experience = experience;
	string x, y, z;
	x = 48; y = 48; z = 48;
	this->ID = "Employee";
	ID = ID.append(x);
	if (EmployeeCount > 0 && EmployeeCount <= 9)
	{
		ID = ID.append(y);
		z = 48 + EmployeeCount;
		ID = ID.append(z);
	}
	if (EmployeeCount > 9)
	{
		inc1++;
		y = 48 + 1;
		ID = ID.append(y);
		z = 48 + inc1 - 1;
		ID = ID.append(z);
	}
	this->fired = false;
}
Employee::~Employee()
{
	delete[]ptr;
	ptr = nullptr;
}

void Employee::print()
{
	Person::print();
	cout << "Age: " << this->age << endl;
	cout << "CNIC: " << this->CNIC << endl;
	cout << "Experience: " << this->experience << endl;
	if (this->fired == true)
	{
		cout << "Status: Fired" << endl;
	}
	else
	{
		cout << "Status: Working" << endl;
	}
}
void Employee::firedEmployee()
{
	fired = true;
}
void Employee::SetfiredEmployee(bool status)
{
	this->fired = status;
}
bool Employee::getfiredEmployee()
{
	return this->fired;
}
void Employee::displayAllEmployee()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i].print();
	}
}
void Employee::addEmployee (Employee& obj)
{
	size++;
	if (ptr != nullptr) {
		Employee* temp = new Employee[size];
		for (int i = 0; i < size - 1; i++) {
			temp[i] = ptr[i];
		}
		temp[size - 1] = obj;
		delete[]ptr;
		ptr = nullptr;
		ptr = temp;
	}
	else
	{
		ptr = new Employee[size];
		ptr[size - 1] = obj;
	}
}
Employee* Employee::SearchID(const string ID)
{

	for (int i = 0; i < size; i++)
	{
		if (ptr[i].getID() == ID) 
		{
			return &ptr[i];
		}
	}
	cout << "Employee not found..." << endl;
	return nullptr;
}
void Employee::SetEmployeeCount(int EmployeeCount)
{
	this->EmployeeCount = EmployeeCount;
}

