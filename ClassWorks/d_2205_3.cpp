//Input a three-digit number and check whether the sum of first and last digit is greater than the middle digit.

#include<iostream>
using namespace std;

int main()
{
    int n; //123
    cout<<"Enter n:\n";
    cin>>n;
    int first = n/100; //1
    int last = n%10;//3
    int sum = first +last;//4
    int middle = (n%100)/10;//2
    cout<<(sum>middle);
    return 0;
}

