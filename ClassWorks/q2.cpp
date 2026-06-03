//WAP to print following on the screen consider int a = 5 , and b = 6
// 1. 56
// 2. a= 5 and b = 5
// 3. a= 6 and b = 5
// 4. value of a is 5 , and value of b is 6
// 5. sum of 5 and 6 is 11
// 6. 5+6 = 11


#include<iostream>
using namespace std;
int main()
{
    int a = 5,b=6,c;
    c = a+b;
    cout<<a<<b;
    cout<<"\na = "<<a;
    cout<<" b = "<<b;
    cout<<"\na = "<<b;
    cout<<" b = "<<a;
    cout<<"\nValue of a is "<<a;
    cout<<" and Value of b is "<<b;
    cout<<"\nSum of 5 and 6 is "<<c;
    cout<<"\n"<<a<<"+"<<b<<"="<<c;
    return 0;
}

