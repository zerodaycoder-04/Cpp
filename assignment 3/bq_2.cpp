#include<iostream>
using namespace std;

int main()
{
    float num;
    cout<<"enter a decimal number: ";
    cin>>num;
    cout<<((int)num == num)<<endl;
    cout<< ((int)num != num)<<endl;
    return 0;
}
