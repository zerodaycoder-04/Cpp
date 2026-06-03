#include<iostream>
using namespace std;
int main()
{
    int p,r,t,si;
    cout<<"Enter principle: ";
    cin>>p;
    cout<<"Enter rate: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>t;
    si = (p*r*t)/100;
    cout<<"simple interest: "<<si;
    return 0;
}
