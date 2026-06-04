#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 integers:";
    cin>>a>>b;
    cout<<((a+b)>(a|b));
    return 0;
}