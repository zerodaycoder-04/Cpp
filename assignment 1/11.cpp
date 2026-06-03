#include<iostream>
using namespace std;
int main()
{
    int a1,b1;
    cout<<"Enter 2 integers: ";
    cin>>a1>>b1;
    int d1 = a1/b1;
    float a2 = (float)a1;
    float b2 = (float)b1;
    float d2 = a2/b2;
    cout<<"Integer division: "<<d1;
    cout<<"\nExact Dvision: "<<d2;
    return 0;
}

