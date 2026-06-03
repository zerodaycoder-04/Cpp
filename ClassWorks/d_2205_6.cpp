// Input a decimal number and check whether integer-casted value multiplied by 2 is greater than original number.

#include<iostream>
using namespace std;

int main()
{
    float num;
    cout<<"Enter a decimal number:";
    cin>>num;
    int num1 = (int)num*2;
    cout<<(num<num1);
    return 0;
}

