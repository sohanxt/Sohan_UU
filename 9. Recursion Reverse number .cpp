#include<iostream>
using namespace std;
int rever (int n,int rev=0)
{
    if(n==0)
        return rev;
    else
    {
        int rem = n%10;
        rev = rev*10+rem;
        return rever(n/10,rev);
    }
}
int main ()
{
    int i;
    cout<<"Enter any number :"<<endl;
    cin>>i;
    cout<<rever(i);
}
