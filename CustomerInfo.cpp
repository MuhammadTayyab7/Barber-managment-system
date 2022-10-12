#include "CustomerInfo.h"

CustomerInfo::CustomerInfo()
{
	ptr = nullptr;
	size = 0;
}

CustomerInfo::~CustomerInfo()
{
	delete[]ptr;
	ptr = nullptr;
}

void CustomerInfo::ReadFile(string filename)
{
	ifstream fin;
	fin.open(filename);
    if (!fin.is_open())
        cout << "Error! This file customer is not close yet..." << endl;
    else
    {
        string temp_ID;
        string temp_name;
        string temp_no;
        string temp_date;
        bool temp_status;

        fin >> size;
        //whenever file is read, old data will be replaced
        if (ptr != nullptr) {
            delete[]ptr;
            ptr = nullptr;
        }
        ptr = new Customer[size];
        for (int i = 0; i < size; i++)
        {
            fin >> temp_ID;
            fin >> temp_name;
            fin >> temp_no;
            fin >> temp_date;
            fin >> temp_status;
            ptr[i] = Customer(temp_name, temp_no, temp_date);//Default assignment operator called here
            ptr[i].setID(temp_ID);
            ptr[i].setBill(temp_status);
        }
    }
    fin.close();
    remove("input.txt");
}

void CustomerInfo::WriteFile(string filename)
{
    ofstream fout;
    fout.open(filename);//std::ios_base::app
    if (fout.is_open())
    {
        fout << size << endl;
        for (int i = 0; i < size; i++)
        {
            fout << ptr[i].getID() << endl;
            fout << ptr[i].getName() << endl;
            fout << ptr[i].getPhoneNO() << endl;
            fout << ptr[i].getDate() << endl;
            fout << ptr[i].getBill() << endl;

          /*  cout << ptr[i].getID() << endl;
            cout << ptr[i].getName() << endl;
            cout << ptr[i].getPhoneNO() << endl;
            cout << ptr[i].getDate() << endl;
            cout << "Bill: " << ptr[i].getBill() << endl;*/
        }
    }
    else
    {
        cout << "Error" << endl;
    }
    fout.close();
}

void CustomerInfo::addCustomer(Customer& obj)
{
    size++;
    if (ptr != nullptr) {
        Customer* temp = new Customer[size];
        for (int i = 0; i < size-1; i++) {
            temp[i] = ptr[i];
        }
        temp[size-1] = obj;
        delete[]ptr;
        ptr = nullptr;
        ptr = temp;
    }
    else
    {
        ptr = new Customer[size];
        ptr[size-1] = obj;
    }
}

Customer* CustomerInfo::SearchID(const string ID)
{

    for (int i = 0; i < size; i++) {

        if (ptr[i].getID() == ID) {

            //cout << "Customer found!\n";
           // cout << ptr[i].getCount();
            return &ptr[i];
        }
  
    }
    cout << "Customer not found..." << endl;
        return nullptr;
}

CustomerInfo& CustomerInfo::instance()
{
	// TODO: insert return statement here
	static CustomerInfo instance;
	return instance;
}

void CustomerInfo::displayAllCustomers()
{
    for (int i = 0; i < size; i++)
    {
        ptr[i].print();
    }
}
