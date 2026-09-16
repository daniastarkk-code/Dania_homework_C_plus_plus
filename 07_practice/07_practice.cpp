#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 4, COLS = 3;
    int arr1[ROWS][COLS] = {
        {1, 0, 3},
        {0, 5, 0},
        {7, 8, 9},
        {0, 0, 2}
    };

    int count_negative = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (arr1[i][j] != 0) {
                count_negative++;
            }
        }
    }

    cout << "Count of elements != 0: " << count_negative << endl;
    return 0;

    const int ROWS2 = 3, COLS2 = 3;
    int arr2[ROWS2][COLS2] = {
        {0, 2, 0},
        {4, 0, 6},
        {7, 8, 9}
    };

    int count_zero = 0;
    for (int i = 0; i < ROWS2; ++i) {
        for (int j = 0; j < COLS2; ++j) {
            if (arr2[i][j] == 0) {
                count_zero++;
            }
        }
    }

    cout << "Count of zero elements: " << count_zero << endl;
    return 0;


    const int ROWS3 = 7, COLS3 = 3;
    int arr3[ROWS3][COLS3] = {
        {-15, 5, 20},
        {-10, 0, -25},
        {11, -12, 8},
        {19, -3, 14},
        {-18, 2, -1},
        {7, 15, -11},
        {-8, 10, 13}
    };

    int count_module = 0;
    for (int i = 0; i < ROWS3; ++i) {
        for (int j = 0; j < COLS3; ++j) {
            int val = arr3[i][j];
            int absVal = (val < 0) ? -val : val;

            if (absVal < 12) {
                count_module++;
            }
        }
    }

    cout << "Count elements with |x| < 12: " << count_module << endl;
    return 0;

    const int ROWS4 = 4, COLS4 = 5;
    int arr4[ROWS4][COLS4] = {
        {-1,  2, -3,  4,  5},
        { 0, -7,  8, -9, 10},
        {11, 12,-13, 14,-15},
        {-2, -4,  6,  8, 10}
    };

    int count_pos = 0;
    for (int i = 0; i < ROWS4; ++i) {
        for (int j = 0; j < COLS4; ++j) {
            if (arr4[i][j] > 0) {
                count_pos++;
            }
        }
    }

    cout << "Count positive elements (> 0): " << count_pos << endl;
    return 0;

    const int ROWS5 = 5, COLS5 = 4;
    double arr5[ROWS5][COLS5] = {
        {-1.5,  2.0, -3.2,  4.5},
        { 0.0, -7.1,  1.5, -9.0},
        { 2.5,  3.0, -4.0,  5.0},
        {-2.0, -4.5,  6.0,  0.5},
        { 1.0, -0.5, -2.5,  3.0}
    };

    double product = 1.0;
    bool hasPositive = false;

    for (int i = 0; i < ROWS5; ++i) {
        for (int j = 0; j < COLS5; ++j) {
            if (arr5[i][j] > 0) {
                product *= arr5[i][j];
                hasPositive = true;
            }
        }
    }

    if (hasPositive) {
        cout << "Product of positive numbers: " << product << endl;
    }
    else {
        cout << "Zero positive elements" << endl;
    }

    return 0;


    const int ROWS6 = 5, COLS6 = 4;
    double arr6[ROWS6][COLS6] = {
        {-1.5,  2.0, -3.2,  4.5},
        { 0.0, -7.1,  1.5, -9.0},
        { 2.5,  3.0, -4.0,  5.0},
        {-2.0, -4.5,  6.0,  0.5},
        { 1.0, -0.5, -2.5,  3.0}
    };

    double product2 = 1.0;
    bool hasNegative2 = false;

    for (int i = 0; i < ROWS6; ++i) {
        for (int j = 0; j < COLS6; ++j) {
            if (arr6[i][j] < 0) {
                product *= arr6[i][j];
                hasNegative2 = true;
            }
        }
    }

    if (hasNegative2) {
        cout << "Product of negative elements: " << product2 << endl;
    }
    else {
        cout << "Zero nagative elements." << endl;
    }

    return 0;
}
