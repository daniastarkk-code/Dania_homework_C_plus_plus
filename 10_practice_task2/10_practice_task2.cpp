#include <iostream>

using namespace std;

int main() {
    const int N = 15;
    int arr[N];

    int val = 17;
    for (int i = 0; i < N; ++i) {
        val = (val * 37 + 11) % 41;
        arr[i] = val - 20;
    }

    cout << "Starting array: ";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int left_idx = -1;
    int right_idx = -1;

    for (int i = 0; i < N; ++i) {
        if (arr[i] < 0) {
            if (left_idx == -1) {
                left_idx = i;
            }
            right_idx = i;
        }
    }

    if (left_idx == -1) {
        cout << "Negative elements are unexist\n";
    }
    else if (left_idx == right_idx || right_idx - left_idx <= 1) {
        cout << "The leftest negative element: " << left_idx << "\n";
        cout << "The rightest negative element: " << right_idx << "\n";
        cout << "Zero elements between them\n";
    }
    else {
        cout << "The leftest negative index: " << left_idx << " (is : " << arr[left_idx] << ")\n";
        cout << "The rightest negative index: " << right_idx << " (is : " << arr[right_idx] << ")\n";

        for (int i = left_idx + 1; i < right_idx - 1; ++i) {
            for (int j = i + 1; j < right_idx; ++j) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << "Array after sorting : ";
        for (int i = 0; i < N; ++i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}