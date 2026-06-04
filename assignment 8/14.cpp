#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<((n>>1)==((int)n/2.0));
    return 0;
}