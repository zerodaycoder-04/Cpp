#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 2 integers:";
    cin>>a>>b;
    int int_quo = a/b;
    cout<<"Integer quotient: "<<int_quo<<endl;;
    cout<<"decimal quo: "<<(double)a/b<<endl;
    return 0;
}

