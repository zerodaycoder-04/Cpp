//WAP to swap the values of two variable without using third variable

#include<iostream> 
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 number to swap:";
    cin>>a>>b;
    cout<<"Before swapping:"<<endl;
    cout<<a<<","<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After swapping:"<<endl;
    cout<<a<<","<<b<<endl;
    return 0;
}