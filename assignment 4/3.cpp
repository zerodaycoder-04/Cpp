#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a 3 digit  number: ";
    cin>>num;
    int original_num = num;
    int first_val = (num/100)*1;
    int mid_val = ((num%100)/10)*10;
    int last_val = (num%10)*100;
    cout<<first_val+mid_val+last_val;
    return 0;
}