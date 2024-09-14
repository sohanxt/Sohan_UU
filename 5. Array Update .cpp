#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int position, newValue;
    cout << "Enter the position to update ";
    cin >> position;
    cout << "Enter the new value: ";
    cin >> newValue;

    if (position >= size || position < 0) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    arr[position-1] = newValue;

    cout << "Array after update: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

