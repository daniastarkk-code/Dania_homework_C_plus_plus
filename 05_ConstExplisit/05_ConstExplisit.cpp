#include <iostream>
using namespace std;

//class Date {
//public:
//    int day;
//    int month;
//    int year;
//    void Print()
//    {
//        day++;
//		cout << "Date: " << day << "/" << month << "/" << year << endl;
//    }
//    void setDate(int d, int m, int y)
//    {
//        this->day = day;
//    }
//    int gatDay()const
//    {
//        
//    }
//};
float doSomething() { return 1.5; }

class Array
{
	int* arr;
	int size;
public:
	Array(int size)
	{
		this->size = size;
		arr = new int[size];
	}
	int getSize() const
	{
		return size;
	}
	void setValue(int value, int index)
	{
		if (index >= 0 && index < size)
		{
			arr[index] = value;
		}
	}
};
void PrintArray(const Array& arr)
{
	cout << "Size: " << arr.getSize() << endl;
}
int main()
{
	int p = 3.14; //inmlisit double -----> int 
	cout << p << endl;

	double b(10);
	cout << b << endl;

	doSomething();


	float pi = (float)3.14;
	int size = 4;
	Array arr(size);
	for (int i = 0; i < arr.getSize(); i++)
	{
		arr.setValue(size - i, i);
	}
	PrintArray(arr);

 //   const int size = 5;
	//const int month[3]{ 31, 28, 31 };


 //   Date holidayDate{ 25,10,2026 };

 //   holidayDate.Print();

 //   holidayDate.day = 31;
 //   holidayDate.Print();

 //   Date independencyDay{ 24,8,2027 };
	//independencyDay.Print();
 //   independencyDay.day = 25;
	//independencyDay.Print();

}
