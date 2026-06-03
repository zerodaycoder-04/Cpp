#include<iostream>
using namespace std;

int main()
{
    int a,b;//348,127
    cin>>a>>b;
    int last_digit_1 = a%10;//348%10=8
    int last_digit_2 = b%10;//127%10=7
    cout<<(last_digit_1>last_digit_2);    
    return 0;
}
