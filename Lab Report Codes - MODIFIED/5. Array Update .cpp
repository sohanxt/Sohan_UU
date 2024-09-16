#include <iostream>
using namespace std;

int main() {
    int n,i;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for ( i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int position, newValue;
    cout << "Enter the position to update ";
    cin >> position;
    cout << "Enter the new value: ";
    cin >> newValue;

    if (position > n || position < 0) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    arr[position-1] = newValue;

    cout << "Array after update: ";
    for ( i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

}

