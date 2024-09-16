#include <iostream>
using namespace std;

int main() {
    int n,i,element,pos = -1;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> element;

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "Element found at pos: " << pos << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}

