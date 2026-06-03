#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter 2 numbers:\n";
    cin>>a>>b;
    cout<<"Before Swap:\n"<<"a = "<<a<<" b = "<<b<<"\n";
    temp = a;
    a = b;
    b = temp;
    cout<<"After Swap:\n"<<"a = "<<a<<" b = "<<b<<"\n";
    return 0;
}

