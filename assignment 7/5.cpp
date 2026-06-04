#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter an integer:";
    cin>>a;
    cout<<((a/4)==(a>>2));
    return 0;
}
