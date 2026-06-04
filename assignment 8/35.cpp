#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<((n>>3)==(n/8));
    return 0;
}