#include "BarberSystem.h"

void BarberSystem::main()
{
	cout << "========================================================================================================================" << endl;
	cout << "\n";
	cout << "			             ************* Main Menu *************\n";
	cout << "			             *                                   *\n";
	cout << "			             *	 1. Customer                     *\n";
	cout << "			             *	 2. Employee                     *\n";
	cout << "			             *	 0. Quit                         *\n";
	cout << "			             *                                   *\n";
	cout << "			             *************************************\n";
	cout << "					 Enter your choice: ";
}

void BarberSystem::Customer_Menu()
{
	cout << "\n";
	cout << "========================================================================================================================" << endl;
	cout << "\n";
	cout << "			             *********** Customer Menu ***********\n";
	cout << "			             *                                   *\n";
	cout << "			             *	 1. Add Customer                 *\n";
	cout << "			             *	 2. Services Menu                *\n";
	cout << "			             *	 3. Print Bill                   *\n";  
	cout << "			             *	 4. Pay Bill                     *\n";
	cout << "			             *	 5. Check Customer Bill status   *\n";
	cout << "			             *	 6. Display all Customers        *\n";
	cout << "			             *	 0. Return to main menu          *\n";
	cout << "			             *                                   *\n";
	cout << "			             *************************************\n";
	cout << "					 Enter your choice: ";
}

void BarberSystem::Employee_Menu()
{
	cout << "\n";
	cout << "========================================================================================================================" << endl;
	cout << "\n";
	cout << "			             *********** Employee Menu ***********\n";
	cout << "			             *                                   *\n";
	cout << "			             *	 1. Add Employee                 *\n";
	cout << "			             *	 2. Fired Employee               *\n";
	cout << "			             *	 3. Display All Employee         *\n";
	cout << "			             *	 0. Return to main menu          *\n";
	cout << "			             *                                   *\n";
	cout << "			             *************************************\n";
	cout << "					 Enter your choice: ";
}

void BarberSystem::Barber_Menu()
{
	cout << "\n";
	cout << "========================================================================================================================" << endl;
	cout << "\n";
	cout << "			             ******** Barber Services Menu *******\n";
	cout << "			             *                                   *\n";
	cout << "			             *	 1. Hair Cut                     *\n";
	cout << "			             *	 2. Hair Styling                 *\n";
	cout << "			             *	 3. Hair Colour                  *\n"; 
	cout << "			             *	 4. Groom                        *\n";
	cout << "			             *	 0. Return to Customer menu      *\n";
	cout << "			             *                                   *\n";
	cout << "			             *************************************\n";
	cout << "					 Enter your choice: ";
}

void BarberSystem::Hair_Cut()
{
	cout << "\n";
	cout << "========================================================================================================================" << endl;
	cout << "\n";
	cout << "			             ************** Hair Cut *************\n";
	cout << "			             *                                   *\n";
	cout << "			             *	 1. Student Cut       Rs.300     *\n";
	cout << "			             *	 2. Men's Cut         Rs.500     *\n";
	cout << "			             *	 3. Kid's Cut         Rs.400     *\n";
	cout << "			             *	 4. Trim Cut          Rs.200     *\n";
	cout << "			             *	 0. Return to Services menu      *\n";
	cout << "			             *                                   *\n";
	cout << "			             *************************************\n";
	cout << "					 Enter your choice: ";
}

void BarberSystem::Hair_Styling()
{
	cout << "\n";
	cout << "========================================================================================================================" << endl;
	cout << "\n";
	cout << "			             ************ Haie Styling ***********\n";
	cout << "			             *                                   *\n";
	cout << "			             *	 1. Blowdry           Rs.100     *\n";
	cout << "			             *	 2. Men's             Rs.300     *\n";
	cout << "			             *	 3. Kid's             Rs.200     *\n";
	cout << "			             *	 0. Return to Services menu      *\n";
	cout << "			             *                                   *\n";
	cout << "			             *************************************\n";
	cout << "					 Enter your choice: ";
}

void BarberSystem::Hair_Colour()
{
	cout << "\n";
	cout << "========================================================================================================================" << endl;
	cout << "\n";
	cout << "			             ************* Haie Colour ***********\n";
	cout << "			             *                                   *\n";
	cout << "			             *	 1. Simple colour     Rs.1300    *\n";
	cout << "			             *	 2. Semi-permanent    Rs.1500    *\n";
	cout << "			             *	 3. Colour correction Rs.5000    *\n";
	cout << "			             *	 0. Return to Services menu      *\n";
	cout << "			             *                                   *\n";
	cout << "			             *************************************\n";
	cout << "					 Enter your choice: ";
}

void BarberSystem::Groom()
{
	cout << "\n";
	cout << "========================================================================================================================" << endl;
	cout << "\n";
	cout << "			             *************** Groom ***************\n";
	cout << "			             *                                   *\n";
	cout << "			             *	 1. Economy           Rs.7999    *\n";
	cout << "			             *	 2. Delux             Rs.12500   *\n";
	cout << "			             *	 3. Super Luxry       Rs.14999   *\n";
	cout << "			             *	 0. Return to Services menu      *\n";
	cout << "			             *                                   *\n";
	cout << "			             *************************************\n";
	cout << "					 Enter your choice: ";
}
void BarberSystem::system()
{
	CustomerInfo::instance().ReadFile("input.txt");
	//obj_employee.ReadFile("Employee.txt");
	int choice = 1;
	
	while (choice != 0)
	{l1:
		main();
		cin >> choice;
		if (choice == 1)//Customer
		{
			while (choice != 0)
			{l2:
				Customer_Menu();
				cin >> choice;
				if (choice == 1)//Add Customer
				{
					cout << "=======================================================================================================================" << endl;
					string name, PhoneNo, date;
					cout << "Enter Customer details: " << endl;
					cout << "Name: ";
					cin >> name;
					cout << "Phone No.: ";
					cin >> PhoneNo;
					cout << "Date: ";
					cin >> date;
					cout << "Customer Successfully added....:)" << endl;

					Customer obj(name, PhoneNo, date);
					CustomerInfo::instance().addCustomer(obj);
				}
				else if (choice == 2)// Service Menu
				{
					string id;
					cout << "=======================================================================================================================" << endl;
					cout << "Enter Customer ID: ";
					cin >> id;

					while (choice != 0)
					{
					l3:
						Barber_Menu();
						cin >> choice;
						if (choice == 1)//Hair Cut
						{
							while (choice != 0)
							{
								Hair_Cut();
								cin >> choice;
								if (choice == 1)//Student cut
								{
									CustomerInfo::instance().SearchID(id)->setPayment(300);
								}
								else if (choice == 2)//Men's cut
								{
									CustomerInfo::instance().SearchID(id)->setPayment(500);
								}
								else if (choice == 3)//Kid's cut
								{
									CustomerInfo::instance().SearchID(id)->setPayment(400);
								}
								else if (choice == 4)//Trim
								{
									CustomerInfo::instance().SearchID(id)->setPayment(200);
								}
								else if (choice == 0)// Retrun to Service Menu
								{
									goto l3;
								}
								else
								{
									cout << "=======================================================================================================================" << endl;
									cout << "Entered choice is wrong..." << endl;
								}
							}
						}
						if (choice == 2)//Hair Styling
						{
							while (choice != 0)
							{
								Hair_Styling();// from here add customer details
								cin >> choice;
								if (choice == 1)//Blowdey
								{
									CustomerInfo::instance().SearchID(id)->setPayment(100);
								}
								else if (choice == 2)//Men's
								{
									CustomerInfo::instance().SearchID(id)->setPayment(300);
								}
								else if (choice == 3)//kid's
								{
									CustomerInfo::instance().SearchID(id)->setPayment(200);
								}
								else if (choice == 0)// Retrun to Service Menu
								{
									goto l3;
								}
								else
								{
									cout << "=======================================================================================================================" << endl;
									cout << "Entered choice is wrong..." << endl;
								}
							}
						}
						if (choice == 3)//Hair Colour
						{
							while (choice != 0)
							{
								Hair_Colour();// from here add customer details
								cin >> choice;
								if (choice == 1)//Simple colour
								{
									CustomerInfo::instance().SearchID(id)->setPayment(1300);
								}
								else if (choice == 2)//semi-permanent
								{
									CustomerInfo::instance().SearchID(id)->setPayment(1500);
								}
								else if (choice == 3)//colour correction
								{
									CustomerInfo::instance().SearchID(id)->setPayment(5000);
								}
								else if (choice == 0)// Retrun to Service Menu
								{
									goto l3;
								}
								else
								{
									cout << "=======================================================================================================================" << endl;
									cout << "Entered choice is wrong..." << endl;
								}
							}
						}
						if (choice == 4)//Groom
						{
							while (choice != 0)
							{
								Groom();// from here add customer details
								cin >> choice;
								if (choice == 1)//Economy
								{
									CustomerInfo::instance().SearchID(id)->setPayment(7999);
								}
								else if (choice == 2)//Delux
								{
									CustomerInfo::instance().SearchID(id)->setPayment(12500);
								}
								else if (choice == 3)//Super Delux
								{
									CustomerInfo::instance().SearchID(id)->setPayment(14999);
								}
								else if (choice == 0)// Retrun to Service Menu
								{
									goto l3;
								}
								else
								{
									cout << "=======================================================================================================================" << endl;
									cout << "Entered choice is wrong..." << endl;
								}
							}
						}
						else if (choice == 0)// Retrun to Customer Menu
						{
							goto l2;
						}
						else
						{
							cout << "=======================================================================================================================" << endl;
							cout << "Entered choice is wrong..." << endl;
						}
					}
				}
				else if (choice == 3)//Print Bill
				{
					string ID;
					cout << "=======================================================================================================================" << endl;
					cout << "Enter Customer ID: ";
					cin >> ID;
					BillingSystem::instance().PrintBill(ID);
				}
				else if (choice == 4)//PayBill
				{
					string ID;
					cout << "=======================================================================================================================" << endl;
					cout << "Enter Customer ID: ";
					cin >> ID;
					BillingSystem::instance().PayBill(ID);
				}
				else if (choice == 5)//Check Customer Bill Status
				{
					string ID;
					cout << "=======================================================================================================================" << endl;
					cout << "Enter Customer ID: ";
					cin >> ID;
					BillingSystem::instance().PayedCustomerInfo(ID);
				}
				else if (choice == 6)
				{
					cout << "=======================================================================================================================" << endl;
					CustomerInfo::instance().displayAllCustomers();
				}
				else if (choice == 0)// Retrun to Main Menu
				{
					goto l1;
				}
				else
				{
					cout << "=======================================================================================================================" << endl;
					cout << "Entered choice is wrong..." << endl;
				}
			}
		}
		if (choice == 2)//Employee
		{
			while (choice != 0)
			{
				Employee_Menu();
				cin >> choice;
				if (choice == 1)//Add Employee details
				{
					cout << "=======================================================================================================================" << endl;
					string name, PhoneNo, date, CNIC, experiene;
					int age;
					cout << "Enter Customer details: " << endl;
					cout << "Name: ";
					cin >> name;
					cout << "Phone No.: ";
					cin >> PhoneNo;
					cout << "CNIC: ";
					cin >> CNIC;
					cout << "Age: ";
					cin >> age;
					cout << "Experience: ";
					cin >> experiene;
					cout << "Date: ";
					cin >> date;
					Employee obj(name, PhoneNo, date, age, CNIC, experiene);
					obj_employee.addEmployee(obj);
				}
				else if (choice == 2)//Fired Employee
				{
					string ID;
					cout << "=======================================================================================================================" << endl;
					cout << "Enter Employee ID: ";
					cin >> ID;
					obj_employee.SearchID(ID)->firedEmployee();
					cout << "Employee Successfully fired..." << endl;
				}
				else if (choice == 3)//Disply all employee
				{
					cout << "=======================================================================================================================" << endl;
					obj_employee.displayAllEmployee();
					
				}
				else if (choice == 0)//Return to main menu
				{
					goto l1;
				}
				else
				{
					cout << "=======================================================================================================================" << endl;
					cout << "Entered choice is wrong..." << endl;
				}
			}
		}
		else if (choice == 0)
		{
			cout << "=======================================================================================================================" << endl;
			cout << "  Thank you for using system.......:)" << endl;
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
		}
		else
		{
			cout << "=======================================================================================================================" << endl;
			cout << "Entered choice is wrong..." << endl;
		}
	}
}

BarberSystem& BarberSystem::instance()
{
	// TODO: insert return statement here
	static BarberSystem instance;
	return instance;
}