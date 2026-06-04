#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter integers:";
    cin>>a>>b;
    cout<<(((a<<1)+(b<<1))==(2*(a+b)));
    return 0;
}