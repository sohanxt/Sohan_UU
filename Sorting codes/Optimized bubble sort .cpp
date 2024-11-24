#include <iostream>
using namespace std;

void opBubble(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    cout << "Unsorted array:\n";
    printArray(arr, n);

    opBubble(arr, n);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}
