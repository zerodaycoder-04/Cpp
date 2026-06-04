#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<(((n>>2)<<2)==n);
    return 0;
}