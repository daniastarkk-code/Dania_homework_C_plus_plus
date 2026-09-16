#include <iostream>
using namespace std;


bool isVysocosniyYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isVysocosniyYear(year)) {
        return 29;
    }
    return days[month];
}

long long dateToDays(int day, int month, int year) {
    long long totalDays = day;
    for (int m = 1; m < month; ++m) {
        totalDays += getDaysInMonth(m, year);
    }
    int y = year - 1;
    totalDays += (long long)y * 365 + y / 4 - y / 100 + y / 400;
    return totalDays;
}

int getDaysDifference(int d1, int m1, int y1, int d2, int m2, int y2) {
    long long diff = dateToDays(d1, m1, y1) - dateToDays(d2, m2, y2);
    return (diff < 0) ? -diff : diff;
}

double calculateAverage(const int arr[], int size) {
    if (size <= 0) return 0.0;
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

void countElementTypes(const int arr[], int size, int& positiveCount, int& negativeCount, int& zeroCount) {
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positiveCount++;
        }
        else if (arr[i] < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }
}


int main()
{
    int days = getDaysDifference(1, 1, 2024, 1, 3, 2024);
    cout << days << endl;

    int numbers[] = { 10, -5, 0, 7, -2, 0, 4 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << calculateAverage(numbers, size) << endl;

    int pos = 0, neg = 0, zero = 0;
    countElementTypes(numbers, size, pos, neg, zero);

    cout << pos << " " << neg << " " << zero << endl;

    return 0;
}
