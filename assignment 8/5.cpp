#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 number:";
    cin>>a>>b;
    int avg = (a+b)/2;
    cout<<((avg)>(a^b));
    return 0;
}