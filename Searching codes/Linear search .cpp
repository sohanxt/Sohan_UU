#include <iostream>
using namespace std;

int main() {
    int n, item, location = -1;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int A[n];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter the item to be found: ";
    cin >> item;

    for (int i = 0; i < n; i++) {
        if (A[i] == item) {
            cout << "FOUND at position " << i + 1 << endl;
            location = i;
            break;
        }
    }

    if (location == -1) {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}
