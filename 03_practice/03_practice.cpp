#include <iostream>

using namespace std;

class Array {
    long* arr;
    int size;
    unsigned long long seed;

    long customRandom(long minVal, long maxVal) {
        seed = seed * 1103515245 + 12345;
        long val = static_cast<long>((seed / 65536) % 32768);
        return minVal + (val % (maxVal - minVal + 1));
    }

public:
    Array() {
        arr = nullptr;
        size = 0;
        seed = 1;
    }

    Array(int initialSize) {
        size = initialSize;
        seed = 1;
        if (size > 0) {
            arr = new long[size];
            for (int i = 0; i < size; ++i) {
                arr[i] = 0;
            }
        }
        else {
            arr = nullptr;
            size = 0;
        }
    }

    Array(const Array& other) {
        size = other.size;
        seed = other.seed;
        if (size > 0 && other.arr != nullptr) {
            arr = new long[size];
            for (int i = 0; i < size; ++i) {
                arr[i] = other.arr[i];
            }
        }
        else {
            arr = nullptr;
            size = 0;
        }
    }

    ~Array() {
        delete[] arr;
    }

    void fillDefault() {
        if (size <= 0) return;
        for (int i = 0; i < size; ++i) {
            arr[i] = i + 1;
        }
    }

    void fillRandom(long minVal = -50, long maxVal = 50) {
        if (size <= 0) return;
        for (int i = 0; i < size; ++i) {
            seed += i + 7;
            arr[i] = customRandom(minVal, maxVal);
        }
    }

    void fillKeyboard() {
        if (size <= 0) return;
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    void display() const {
        if (size <= 0 || arr == nullptr) {
            cout << "Empty\n";
            return;
        }
        cout << "[ ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i];
            if (i < size - 1) {
                cout << ", ";
            }
            else {
                cout << " ";
            }
        }
        cout << "]\n";
    }

    void addElement(long value) {
        long* newArr = new long[size + 1];
        for (int i = 0; i < size; ++i) {
            newArr[i] = arr[i];
        }
        newArr[size] = value;
        delete[] arr;
        arr = newArr;
        size++;
    }

    void removeByIndex(int index) {
        if (size <= 0 || index < 0 || index >= size) return;
        if (size == 1) {
            delete[] arr;
            arr = nullptr;
            size = 0;
            return;
        }
        long* newArr = new long[size - 1];
        for (int i = 0, j = 0; i < size; ++i) {
            if (i == index) continue;
            newArr[j++] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        size--;
    }

    void removeByValue(long value) {
        if (size <= 0) return;
        int index = -1;
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            removeByIndex(index);
        }
    }

    void sortArray(bool ascending = true) {
        if (size <= 1) return;
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                bool condition;
                if (ascending) {
                    condition = (arr[j] > arr[j + 1]);
                }
                else {
                    condition = (arr[j] < arr[j + 1]);
                }
                if (condition) {
                    long temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    long getMin() const {
        if (size <= 0 || arr == nullptr) return 0;
        long minVal = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < minVal) minVal = arr[i];
        }
        return minVal;
    }

    long getMax() const {
        if (size <= 0 || arr == nullptr) return 0;
        long maxVal = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > maxVal) maxVal = arr[i];
        }
        return maxVal;
    }

    double getAverage() const {
        if (size <= 0 || arr == nullptr) return 0.0;
        long long sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return static_cast<double>(sum) / size;
    }

    int getSize() const {
        return size;
    }
};

int main() {
    Array arr1(5);
	int choice;
	cout << "Choose fill method:\n1. Default\n2. Random\n3. Keyboard\n";
	cin >> choice;
	if (choice == 1) {
		arr1.fillDefault();
		arr1.display();
	}
	else if (choice == 2) {
		arr1.fillRandom(1, 20);
		arr1.display();
	}
	else if (choice == 3) {
		arr1.fillKeyboard();
		arr1.display();
	}
	else {
		cout << "Invalid choice. Filling with default values.\n";
		arr1.fillDefault();
		arr1.display();
	}
    

    cout << "Min: " << arr1.getMin() << "\n";
    cout << "Max: " << arr1.getMax() << "\n";
    cout << "Avg: " << arr1.getAverage() << "\n";

    
}