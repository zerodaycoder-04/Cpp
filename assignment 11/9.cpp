#include<iostream>
using namespace std;

int main()
{
    int purchase , freq;
    cout<<"Enter yearly purchase:";
    cin>>purchase;
    if(purchase >= 10000)
    {
        cout<<"Upgrade to Platinum Status";
    }
    else if(purchase >= 100 && purchase <= 9999)
    {
        cout<<"Enter frequency:";
        cin>>freq;
        if (freq >= 1000)
        {
            cout<<"Upgraded to Gold Status";
        }
        else
        {
            cout<<"Upgraded to Bronze Status";
        }
    }
    else
    {
        cout<<"No upgrade";
    }
    return 0;
}