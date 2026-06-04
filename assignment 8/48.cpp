#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter 2 integers:";
    cin>>a>>b;
    cout<<(((a-b)<<1) == ((a<<1)-(b<<1)));
    return 0;
}