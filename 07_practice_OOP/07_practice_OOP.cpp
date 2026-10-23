#include <iostream>
using namespace std;

class Array
{
    int* arr;
    int size;
public:
    Array()
    {
        size = 0;
        arr = nullptr;
    }

    explicit Array(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    Array(int size, int num)
    {
        this->size = size;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = num;
        }
    }

    ~Array()
    {
        if (arr != nullptr)
            delete[] arr;
    }

    int getSize() const
    {
        return size;
    }

    int getValue(int index)
    {
        return arr[index];
    }

    void setValue(int num, int index)
    {
        arr[index] = num;
    }

    void display(int index) const
    {
        cout << arr[index] << " ";
    }

    int& operator[](int index)
    {
        return arr[index];
    }

    const int& operator[](int index) const
    {
        return arr[index];
    }

    void operator()(int value)
    {
        for (int i = 0; i < size; ++i)
        {
            arr[i] += value;
        }
    }
};

int main()
{
    Array arr1(5, 10);

    for (int i = 0; i < arr1.getSize(); ++i) {
        arr1.display(i);
    }
    cout << endl;

    arr1[0] = 15;
    arr1[2] = 25;
    arr1[4] = 35;

    for (int i = 0; i < arr1.getSize(); ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    arr1(5);

    for (int i = 0; i < arr1.getSize(); ++i) {
        arr1.display(i);
    }
    cout << endl;

    Array arr2(3);
    arr2[0] = 100;
    arr2[1] = 200;
    arr2[2] = 300;

    for (int i = 0; i < arr2.getSize(); ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

}