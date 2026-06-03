#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter 2 integers:";
    cin>>a>>b;
    int sums = a+b;
    int diff = a-b;
    int prod = a*b;
    cout<<(sums>(a*b))<<endl;
    cout<<(diff == 0)<<endl;
    cout<<(prod != 100)<<endl;
    return 0;
}



