//Input two integers and check whether (a+b)^2 is greater than (a*a + b*b)

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<((a*a + 2*a*b + b*b)>(a*a + b*b));
    return 0;
}
