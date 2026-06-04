#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 integers:";
    cin>>a>>b;
    cout<<(((a>>1)+(b>>1))>(a+b)>>1);
    return 0;
}