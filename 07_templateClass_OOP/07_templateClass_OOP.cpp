#include <iostream>
#include <vector>
using namespace std;

//int getMax(short arr[], int size)
//{
//    int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	return max;
//}
template<typename T_coord>
class Point {
	T_coord x;
	T_coord y;
public:
#pragma region Constructors
	Point()
	{
		x = y = 0;
	}
	Point(T_coord value)
	{
		x = y = value;
	}
	Point(T_coord x, T_coord y)
	{
		this->x = x;
		this->y = y;
	}
#pragma endregion
	void Print()const
	{
		cout << "X : " << x << ". Y : " << y << endl;
	}
	void setNewCoords(T_coord newX, T_coord newY) {
		this->x = newX;
		this->y = newY;
	}
};

template<typename T_X, typename T_Y>
class NewPoint {
	T_X x;
	T_Y y;
public:
#pragma region Constructors
	NewPoint()
	{
		x = y = 0;
	}
	NewPoint(T_X value)
	{
		x = y = value;
	}
	NewPoint(T_X x, T_Y y)
	{
		this->x = x;
		this->y = y;
	}
#pragma endregion
	void Print()const
	{
		cout << "X : " << x << ". Y : " << y << endl;
	}
	void setNewCoords(T_X newX, T_Y newY) {
		this->x = newX;
		this->y = newY;
	}
};

int main()
{
	NewPoint<int, float> p3(5, 3.14);
	p3.Print();
	Point<int> p(5, 14);
	p.Print();
	Point<float> p2(1.25, 3.14);
	p2.setNewCoords(5.35, 14.33);
	p2.Print();

	vector<int> v1 = { 1, 2, 3, 4, 5 };
	









	//const int size = 10;
	//short arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//cout << "Max element in the array is: " << getMax(arr, size) << endl;

}
