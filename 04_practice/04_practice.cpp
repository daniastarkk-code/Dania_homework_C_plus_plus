#include <iostream>
using namespace std;


class Abonent
{
    string name;
	string home_phone;
	string work_phone;
	string mobile_phone;
	int age;
public:
	static void CountOfAbonents()
	{
		static int count = 0;
		count++;
		cout << "Count of abonents: " << count << endl;
	}



	Abonent(string name, string home_phone, string work_phone, string mobile_phone, int age)
	{
		this->name = name;
		this->home_phone = home_phone;
		this->work_phone = work_phone;
		this->mobile_phone = mobile_phone;
		this->age = age;
	}
	Abonent(string name, string home_phone, string work_phone, string mobile_phone)
	{
		this->name = name;
		this->home_phone = home_phone;
		this->work_phone = work_phone;
		this->mobile_phone = mobile_phone;
		this->age = 0;
	}
	
	Abonent(string name, string home_phone, string work_phone)
	{
		this->name = name;
		this->home_phone = home_phone;
		this->work_phone = work_phone;
		this->mobile_phone = "";
		this->age = 0;
	}
	Abonent(string name, string home_phone, int age)
	{
		this->name = name;
		this->home_phone = home_phone;
		this->work_phone = "";
		this->mobile_phone = "";
		this->age = age;
	}
	Abonent(string name, string home_phone)
	{
		this->name = name;
		this->home_phone = home_phone;
		this->work_phone = "";
		this->mobile_phone = "";
		this->age = 0;
	}
	Abonent(string name, int age)
	{
		this->name = name;
		this->home_phone = "";
		this->work_phone = "";
		this->mobile_phone = "";
		this->age = age;
	}
	Abonent(string name)
	{
		this->name = name;
		this->home_phone = "";
		this->work_phone = "";
		this->mobile_phone = "";
		this->age = 0;
	}
	Abonent(int age)
	{
		this->name = "no name";
		this->home_phone = "";
		this->work_phone = "";
		this->mobile_phone = "";
		this->age = age;
	}
	Abonent()
	{
		this->name = "no name";
		this->home_phone = "";
		this->work_phone = "";
		this->mobile_phone = "";
		this->age = 0;
	}
	Abonent(string name, string home_phone, string work_phone, int age)
	{
		this->name = name;
		this->home_phone = home_phone;
		this->work_phone = work_phone;
		this->mobile_phone = "";
		this->age = age;
	}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Home phone: " << home_phone << endl;
		cout << "Work phone: " << work_phone << endl;
		cout << "Mobile phone: " << mobile_phone << endl;
		cout << "Age: " << age << endl;
	}
};

int main()
{
	cout << "Telephone Directory" << endl;
    Abonent abonent1("John Doe", "123-456-7890", "098-765-4321", "555-555-5555", 30);
    Abonent abonent2("Jane Smith", "111-222-3333", "444-555-6666");
    Abonent abonent3("Bob Johnson", "777-888-9999");

    abonent1.Print();
    abonent2.Print();
    abonent3.Print();

    Abonent::CountOfAbonents();
    Abonent::CountOfAbonents();
    Abonent::CountOfAbonents();

}
