#include <iostream>
using namespace std;

void mergeSort(int A[], int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;

        mergeSort(A, l, mid);
        mergeSort(A, mid + 1, r);

        int n1 = mid - l + 1;
        int n2 = r - mid;

        int L[n1], R[n2];

        for (int i = 0; i < n1; i++)
            L[i] = A[l + i];
        for (int i = 0; i < n2; i++)
         R[i] = A[mid + 1 + i];

        int i = 0, j = 0, k = l;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                A[k++] = L[i++];
            } else {
                A[k++] = R[j++];
            }
        }

        while (i < n1) A[k++] = L[i++];
        while (j < n2) A[k++] = R[j++];
    }
}

int main() {
    int A[] = {5, 2, 4, 7, 1, 3, 2, 6};
    int n = 8;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << endl;

    mergeSort(A, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << endl;

    return 0;
}
