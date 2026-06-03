#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int last_digit_1 = a%10;
    int last_digit_2 = b%10;
    cout<<(last_digit_1 == last_digit_2);    
    return 0;
}
