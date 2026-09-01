#include <iostream>
using namespace std;

int main() {

	cout << "First ex\n";

	int first_number;
	cout << "Enter first number : ";
	cin >> first_number;

	int second_number;
	cout << "Enter second number : ";
	cin >> second_number;

	int third_number;
	cout << "Enter third number : ";
	cin >> third_number;

	int sum_of_numbers = first_number + second_number + third_number;

	cout << "Your first number : " << first_number << endl;
	cout << "Your second number : " << second_number << endl;
	cout << "Your third number : " << third_number << endl;

	cout << "Your sum : " << sum_of_numbers << endl;

	cout << "Second ex\n";

	int first_number2;
	cout << "Enter first number : ";
	cin >> first_number2;

	int second_number2;
	cout << "Enter second number : ";
	cin >> second_number2;

	float avg = (first_number2 + second_number2) / 2;

	cout << "Average of" << " " << first_number2 << " " << "and" << " " << second_number2 << " " << "is : " << avg << endl;

	cout << "Third ex\n";

	int kilometrs;
	cout << "Enter count of kilometrs you want to know in meters :";
	cin >> kilometrs;

	int meters = kilometrs * 1000;

	cout << "Your" << " " << kilometrs << " " << "kilometrs" << " " << "equals" << " " << meters << " " << "meters" << endl;


	cout << "Fourth ex\n";

	float bread_price = 3.50;
	float butter_price = 2.35;
	float chips_price = 5.05;
	float meat_price = 3.55;

	int count_of_bread = 2;
	int count_of_butter = 3;
	int count_of_chips = 5;
	int count_of_meat = 1;

	float total_price = bread_price * count_of_bread + butter_price * count_of_butter + chips_price * count_of_chips + meat_price * count_of_meat;

	cout << "Price of bread = " << bread_price << " and count of bread is : " << count_of_bread << endl;
	cout << "Price of butter = " << butter_price << " and count of butter is : " << count_of_butter << endl;
	cout << "Price of chips = " << chips_price << " and count of chips is : " << count_of_chips << endl;
	cout << "Price of meat = " << meat_price << " and count of meat is : " << count_of_meat << endl;

	cout << "Total price of this items : " << total_price << endl;



}