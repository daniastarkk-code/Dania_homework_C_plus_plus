#include <iostream>
using namespace std;



int main()
{



	cout << "Ex 1" << endl;
	float a, b;
	cout << "Enter lenth of rectangle: ";
	cin >> a;
	cout << "Enter width of rectangle: ";
	cin >> b;



	if ( a == b )
	{
		cout << "The rectangle is a square." << endl;
	}
	else if (a <= 0 || b <= 0)
	{
		cout << "Invalid input. Length and width must be positive numbers." << endl;
	}
	else {
		cout << "All is fine." << endl;
	}



	cout << "Ex 2" << endl;

	int age;
	cout << "Enter age of child: ";
	cin >> age;
	if (age == 6 or age == 7 or age == 8 or age == 9 or age == 10 or age == 11 or age == 12 or age == 13 or age == 14 or age == 15 or age == 16 or age == 17 or age == 18)
	{
		cout << "The child can study at school." << endl;
	}
	else if (age < 6)
	{
		cout << "The child is too young for school." << endl;
	}
	else if (age > 18)
	{
		cout << "The child is too old for school." << endl;
	}
	else {
		cout << "Invalid input. Age must be a positive number." << endl;
	}

	cout << "Ex 3" << endl;
	int n1, n2, n3;
	cout << "Enter first number: ";
	cin >> n1;
	cout << "Enter second number: ";
	cin >> n2;
	cout << "Enter third number: ";
	cin >> n3;
		if (n1 < 0 and n2 < 0){
			cout << "The first and second numbers are negative." << endl;
		}
		else if (n1 < 0 and n3 < 0) {
			cout << "The first and third numbers are negative." << endl;
		}
		else if (n2 < 0 and n3 < 0) {
			cout << "The second and third numbers are negative." << endl;
		}

	cout << "Ex 4" << endl;
	float number;
	cout << "Enter a number: ";
	cin >> number;
	if (number >= 2 and number <= 5) {
		cout << "The number is in the range [2, 5]." << endl;
	}
	else if (number >= -1 and number <= 1) {
		cout << "The number is in the range [-1, 1]." << endl;
	}
	else {
		cout << "The number is not in the specified ranges." << endl;
	}




	cout << "Ex 5" << endl;

	int number1, number2, number3;
	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter second number: ";
	cin >> number2;
	cout << "Enter third number: ";
	cin >> number3;

	if (number1 == number2 or number1 == number3 or number2 == number3) {
		cout << "At least two numbers are equal." << endl;
	}
	else {
		cout << "All numbers are different." << endl;
	}



cout << "Ex 6" << endl;

int n4, n5, n6;
cout << "Enter first number: ";
cin >> n4;
cout << "Enter second number: ";
cin >> n5;
cout << "Enter third number: ";
cin >> n6;

if (n4 % 2 == 0 and n5 % 2 == 0 and n6 % 2 == 0) {
	cout << "All numbers are even." << endl;
}
else if (n4 % 2 != 0 and n5 % 2 != 0 and n6 % 2 != 0) {
	cout << "All numbers are odd." << endl;
}
	

		
	
























}


