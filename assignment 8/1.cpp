#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 number:";
    cin>>a>>b;
    int a_sum = (a+b)/2;
    cout<<((a&b)>a_sum);
    return 0;
}
