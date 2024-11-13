#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int j = 1; j < n; j++) {
        int key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    cout << "Unsorted array:\n";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}
