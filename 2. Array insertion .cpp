#include<iostream>
using namespace std;
int main ()
{
    int i,n,pos,value;
    cout<< "Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<< "Enter array elements" <<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<< "Traversal All the elements"<<endl;
     for(i=0;i<n;i++)
        cout<<arr[i]<<endl;
        cout<< "Enter position of insertion"<<endl;
        cin>>pos;
        cout<< "Enter value"<<endl;
        cin>>value;
        for(i=n-1;i>=pos-1;i--)
            arr[i+1]=arr[i];
        arr[pos-1]=value;
        cout<< "array elements after insertion"<<endl;
           for(i=0;i<=n;i++)
        cout<<arr[i]<<endl;

}
