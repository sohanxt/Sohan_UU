#include<iostream>
using namespace std;
int main ()
{
    int i,n;
    cout<< "Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<< "Enter array elements" <<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<< "Traversal All the elements"<<endl;
     for(i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
