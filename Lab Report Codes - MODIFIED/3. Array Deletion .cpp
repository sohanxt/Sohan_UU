#include<iostream>
using namespace std;
int main ()
{
    int i,n,pos;
    cout<< "Enter array size"<<endl;
    cin>>n;
    int ar[n];
    cout<< "enter array elements"<<endl;
    for(i=0;i<n;i++)
        cin>>ar[i];
        cout<< "Printing all elements"<<endl;
    for(i=0;i<n;i++)
        cout<<ar[i]<<endl;
        cout<< "Enter position of insertion "<<endl;
        cin>>pos;
        if(pos>= 1 && pos<= n){
        for(i=pos-1;i<n-1;i++)
        ar[i]=ar[i+1];
        n--;
        cout<<"After delete elements :"<<endl;
        for(i=0;i<n;i++)
        cout<<ar[i]<<endl;

        }
        else
        cout<< "Delete not possible";


}