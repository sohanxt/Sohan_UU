#include<iostream>
using namespace std;
int fib ( int i)
{
    if (i==0)
        return 1;
    else if (i==1)
        return 2;
 else
        return fib(i-1)+fib (i-2);
}
int main()
{ int i;
    for(i=0;i<10;i++)
        cout<< fib(i)<<endl;
}