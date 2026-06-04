#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter 2 number:";
    cin>>a>>b;
    cout<<((a+b+b)==(a+(b<<1)));
    return 0;
}