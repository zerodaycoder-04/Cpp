#include<iostream>
using namespace std;

int main()
{
    int fuel_level,navi_acc,comm_rel;
    cout<<"Enter Fuel level:";
    cin>>fuel_level;
    if (fuel_level <=99)
    {
        cout<<"Insufficient fuel";
    }
    else if (fuel_level == 100)
    {
        cout<<"Checking navigation accuracy:";
        cin>>navi_acc;
        if (navi_acc<89)
        {
            cout<<"Conditions not cleared";
        }
        else if (navi_acc>=99 && navi_acc <=90)
        {
            cout<<"Approved,Ready to take off";
        }
        else
        {
            cout<<"Enter communication score:";
            cin>>comm_rel;
            if (comm_rel>=99)
            {
                cout<<"Done!Ready to take off";
            }
            else
            {
                cout<<"Conditions not cleared";
            }
        }
    }
    return 0;
}