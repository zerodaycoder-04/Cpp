#include<iostream>
using namespace std;

int main()
{
    int age,height;
    cout<<"Enter age:";
    cin>>age;
    if(age>18 && age <=60)
    {
        cout<<"Proceeding with height verification...";
        cout<<"\nEnter height:";
        cin>>height;
        if (height>100 && height<=250)
        {
            cout<<"Allowed";
        }
        else
        {
            cout<<"Sorry!height not matched.You are not allowed";
        }
    }
    else
    {
        cout<<"Age is low..Ride not posiible";
    }
    return 0;
}
