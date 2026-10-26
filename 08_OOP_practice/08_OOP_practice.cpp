#include <iostream>
#include <initializer_list>

using namespace std;

template <typename T>
class Array
{
    T* arr;
    int size;
public:
    Array()
    {
        arr = nullptr;
        size = 0;
    }

    explicit Array(int size)
    {
        this->size = size;
        arr = new T[size]{};
    }

    Array(initializer_list<T> list)
    {
        this->size = list.size();
        arr = new T[size];
        int i = 0;
        for (const T& elem : list)
        {
            arr[i] = elem;
            i++;
        }
    }

    Array(const Array& other)
    {
        size = other.size;
        if (size > 0)
        {
            arr = new T[size];
            for (int i = 0; i < size; i++)
                arr[i] = other.arr[i];
        }
        else
        {
            arr = nullptr;
        }
    }

    Array& operator=(const Array& other)
    {
        if (this == &other) return *this;
        delete[] arr;
        size = other.size;
        if (size > 0)
        {
            arr = new T[size];
            for (int i = 0; i < size; i++)
                arr[i] = other.arr[i];
        }
        else
        {
            arr = nullptr;
        }
        return *this;
    }

    Array& operator=(initializer_list<T> list)
    {
        delete[] arr;
        size = list.size();
        arr = new T[size];
        int i = 0;
        for (const T& elem : list)
        {
            arr[i] = elem;
            i++;
        }
        return *this;
    }

    void Fill(initializer_list<T> list)
    {
        delete[] arr;
        size = list.size();
        arr = new T[size];
        int i = 0;
        for (const T& elem : list)
        {
            arr[i] = elem;
            i++;
        }
    }

    ~Array()
    {
        if (arr != nullptr)
            delete[] arr;
    }

    void Print() const
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int GetSize() const
    {
        return size;
    }

    T& operator[](int index)
    {
        return arr[index];
    }

    const T& operator[](int index) const
    {
        return arr[index];
    }
};

template <typename T>
T FindMax(const Array<T>& a)
{
    T maxVal = a[0];
    for (int i = 1; i < a.GetSize(); i++)
    {
        if (a[i] > maxVal)
            maxVal = a[i];
    }
    return maxVal;
}

template <typename T>
T FindMin(const Array<T>& a)
{
    T minVal = a[0];
    for (int i = 1; i < a.GetSize(); i++)
    {
        if (a[i] < minVal)
            minVal = a[i];
    }
    return minVal;
}

template <typename T>
void SortArray(Array<T>& a)
{
    int n = a.GetSize();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                T temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

template <typename T>
int BinarySearch(const Array<T>& a, const T& key)
{
    int B = 0, E = a.GetSize() - 1;
    while (B <= E)
    {
        int p = (B + E) / 2;
        if (key > a[p])
        {
            B = p + 1;
        }
        else if (key < a[p])
        {
            E = p - 1;
        }
        else
        {
            return p;
        }
    }
    return -1;
}

template <typename T>
void ReplaceElement(Array<T>& a, int index, const T& newValue)
{
    if (index >= 0 && index < a.GetSize())
    {
        a[index] = newValue;
    }
}

int main()
{
    Array<int> numbers = { 15, 7, 1, 47, 53, 9, 8, 21, 16, 5 };

    cout << "Initial array: ";
    numbers.Print();

    numbers = { 53, 47, 21, 16, 15, 9, 8, 7, 5, 1 };
    cout << "After list assignment: ";
    numbers.Print();

    SortArray(numbers);
    cout << "After sorting: ";
    numbers.Print();

    cout << "Max element: " << FindMax(numbers) << endl;
    cout << "Min element: " << FindMin(numbers) << endl;

    int key = 16;
    int index = BinarySearch(numbers, key);
    cout << "Element " << key << " found at index: " << index << endl;

    ReplaceElement(numbers, 2, 99);
    cout << "After replacing element at index 2 with 99: ";
    numbers.Print();
    cout << "End";
}