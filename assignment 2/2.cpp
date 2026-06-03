#include<iostream>
using namespace std;
int main()
{
    int bp,d,t;
    cout<<"Enter base price:\n";
    cin>>bp;
    cout<<"Enter discount percentage:\n";
    cin>>d;
    cout<<"Enter tax percentage:\n";
    cin>>t;
    d = bp*d/100;
    t = (bp - d) *t/100;
    cout<<"Final price: "<<bp-d+t;
    return 0;

}