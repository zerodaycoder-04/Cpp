#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"ENter a number:"<<endl;
    cin>>num;
    cout<<(~num > num);
    return 0;
}
