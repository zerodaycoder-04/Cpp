#include<iostream>
using namespace std;

int main()
{
    int age,valid;
    cin>>age>>valid;
    cout<<((age>=18)&&(valid==1))<<endl;
    cout<<(age> 60)&&(valid==1);
    return 0;
}