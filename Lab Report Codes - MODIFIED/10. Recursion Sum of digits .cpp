#include<iostream>
using namespace std;
int sum (int n)
{
    if(n==0)
        return 0;
    else
        return ((n%10)+sum(n/10));
}
int main ()
{
    int x;
    cout<< "Enter Any Number"<<endl;
    cin>>x;
    cout<<sum(x);
}
