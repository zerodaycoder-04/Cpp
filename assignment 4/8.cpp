#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a 2 digit number: ";
    cin>>a;
    int l_d = a%10;
    int f_d = a/10;
    cout<<((f_d + l_d)>(f_d * l_d));
    return 0;
}
