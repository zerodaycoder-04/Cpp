#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 nos:";
    cin>>a>>b;
    cout<<((a&b)<a||(a&b)<b);
    return 0;
}