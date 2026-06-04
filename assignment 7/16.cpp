#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter integers:";
    cin>>a>>b>>c;
    cout<<((a&b)==(b&c));
    return 0;
}