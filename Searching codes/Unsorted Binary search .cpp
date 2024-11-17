#include <iostream>
#include <algorithm>
using namespace std;

int bSearch(int A[], int size, int x) {
    int first = 0, last = size - 1;

    while (first <= last) {
        int mid = (first + last) / 2;

        if (A[mid] == x) {
            cout << "Target found at position: " << mid+1 << endl;
            return mid;
        } else if (x < A[mid]) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }

    cout << "Target not found" << endl;
    return -1;
}
void printarray (int a[],int n)
{   cout << "Array elements"<<endl;
    for(int i=0;i<n;i++)
    cout <<a[i]<<endl;
}

int main() {
    int A[] = {7, 3, 9, 1, 11, 5};
    int size = 6;
    int target;
    cout << "Unsorted array :"<<endl;
    printarray(A,size);

    sort(A, A + size);
    cout << "Sorted array :"<<endl;
    printarray(A,size);
    cout << "Enter target"<<endl;
    cin>>target;
    bSearch(A, size, target);

    return 0;
}
