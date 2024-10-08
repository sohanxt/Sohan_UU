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

    int element;
    cout << "Enter the element to search: ";
    cin >> element;

    int position = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "Element found at position: " << position << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}

