#include <iostream>
using namespace std;

int bsearch(int A[], int n, int x) {
    int first = 0, last = n - 1;

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
    int A[] = {1, 3, 5, 7, 9, 11};
    int size = 6;
    int target ;
    printarray(A,size);
    cout<< " Enter number to be found"<<endl;
    cin>>target;
    bsearch(A, size, target);

    return 0;
}
