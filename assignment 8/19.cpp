#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<((n^0)>(n&0));
    return 0;
}