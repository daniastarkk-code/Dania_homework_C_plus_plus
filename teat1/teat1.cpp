#include <iostream>
using namespace std;

int main()
{
	int N = 10;
	cout << "\tFirst task" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i < j)
			{
				cout << "  *";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << "\tSecond task" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i > j)
			{
				cout << "  *";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << "\tThird task" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{

			if (i <= j && i + j <= N - 1)
			{
				cout << "  *";
			}
			else
			{
				cout << "   ";
			}

		}
		cout << endl;
	}
	cout << "\tFourth tast" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{

			if (i >= j && i + j >= N - 1)
			{
				cout << "  *";
			}
			else
			{
				cout << "   ";
			}

		}
		cout << endl;
	}
	cout << "\tFifth task" << endl;
	for (int i = 0; i <= N + 1; i++)
	{
		for (int j = 0; j <= N + 1; j++)
		{

			if (i > j and i + j > N or i <= j and i + j <= N)
			{
				cout << "  *";
			}
			else
			{
				cout << "   ";
			}

		}
		cout << endl;
	}
	cout << "\tSixth task" << endl;
	for (int i = 0; i <= N + 1; i++)
	{
		for (int j = 0; j <= N + 1; j++)
		{

			if (i < j and i + j > N or i >= j and i + j <= N)
			{
				cout << "  *";
			}
			else
			{
				cout << "   ";
			}

		}
		cout << endl;
	}
	cout << "\tSeventh task" << endl;
	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= N; j++)
		{

			if (i >= j && i + j <= N)
			{
				cout << "  *";
			}
			else
			{
				cout << "   ";
			}

		}
		cout << endl;
	}
	cout << "\tEighth task" << endl;
	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= N; j++)
		{

			if (i <= j && i + j >= N)
			{
				cout << "  *";
			}
			else
			{
				cout << "   ";
			}

		}
		cout << endl;
	}
	cout << "\tNinth task" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i + j < N)
			{
				cout << "  *";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << "\tTenth task" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i + j > N - 2)
			{
				cout << "  *";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}








}