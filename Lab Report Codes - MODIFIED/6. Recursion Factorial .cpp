#include<iostream>
using namespace std;
int factorial (int n)
{
    if (n>1)
        return n*factorial(n-1);
    else
        return n;
}
int main (){
    int a;
    cout<< "Enter any number :"<<endl;
    cin>>a;
    cout<<factorial(a);


}
