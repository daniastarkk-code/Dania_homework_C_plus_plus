#include <iostream>
using namespace std;   

int main()
{
	cout << "\tFirst task" << endl;
	int i = 14;
	while (i)
	{
		if (i < 124)
		{
			cout << i << endl;
			i++;
		}
		else
		{
			break;
		}
	}
	cout << "\tSecond task" << endl;
	int b = 0;
	while (b < 100)
	{
		if (b % 2 == 0)
		{
			cout << b << endl;
		}
		b++;
	}
	cout << "\tThird task" << endl;
	int N;
	int d = 0;
	int e;
	int c = 0;
	cout << "Enter number of numbers : ";
	cin >> N;
	while (c < N)
	{
		cout << "Enter number : " << endl;
		cin >> e;
		if (e < 0)
		{
			d++;
		}
		c++;
	}
	cout << "Number of negative numbers: " << d << endl;
	cout << "\tFourth task" << endl;
	int f = 0;
	int m;
	int avg = 0;
	while (f < 9)
	{
		cout << "Enter number : " << endl;
		cin >> m;
		avg += m;
		f++;
	}
	cout << "Average: " << avg / 9 << endl;
	cout << "\tFifth task" << endl;
	int g = 99; 
	
	do
	{
		cout << g << " ";
		g -= 2;
	} while (g >= 1);

	cout << endl;
	cout << "\tSixth task" << endl;
	int h;
	int j = 0;
	int sum = 0;
	do
	{
		cout << "Enter number : " << endl;
		cin >> h;
		sum += h;
		j++;
	} while (j <= 5);
	cout << "Sum: " << sum << endl;
	
}