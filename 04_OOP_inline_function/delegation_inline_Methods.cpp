#include <iostream>
using namespace std;

#define PI 3.1415926;
inline void Hello()
{
    cout << "Hello world!" << endl;
}

class Human
{
    string name;
    int age;
    float weight;
public:
    Human()
    {
        name = "no name";
        age = 0;
        weight = 0;
    }
    Human(string name)
    { 
		this->name = name;
	    age = 0;
	    weight = 0; 
    }
    Human(string name, int age, float weight)
	{
		this->name = name;
		this->age = age;
		this->weight = weight;
	}
    Human(int age)
    {
		this->name = "no name";
		this->age = age;
		this->weight = 0;
	}
	Human(float weight)
	{
		this->name = "no name";
		this->age = 0;
		this->weight = weight;
	}

	Human(string name, int age)
	{
		this->name = name;
		this->age = age;
		this->weight = 0;
	}
	Human(string name, float weight)
	{
		this->name = name;
		this->age = 0;
		this->weight = weight;
	}
	Human(int age, float weight)
	{
		this->name = "no name";
		this->age = age;
		this->weight = weight;
	}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Weight: " << weight << endl;
	}
	

};



int main()
{
	Human h1;
	h1.Print();

	Human h2("Lexa");
	h2.Print();

	Human h3("Oleg", 20, 60.5);
	h3.Print();

	Human h4(20);
	h4.Print();
	
	Human h5(60);
	h5.Print();

	Human h6("Sania", 20);
	h6.Print();

	Human h7("Vova", 65);
	h7.Print();

	Human h8(20, 60.5);
	h8.Print();


}

