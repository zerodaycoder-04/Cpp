#include<iostream>
using namespace std;

int main()
{
    int con_stat,attendance;
    cout<<"Do you have Consent from your gurdian?";
    cin>>con_stat;
    if(con_stat == 0)
    {
        cout<<"Permission leke aao beta...";
    }
    else if (con_stat == 1)
    {
        cout<<"Attendance kitna hai?";
        cin>>attendance;
        if (attendance>=60 && attendance<=100)
        {
            cout<<"You are ready for excursion!";
        }
        else
        {
            cout<<"Pehle school aao roz fir jana excursion";
        }
    }
    else
    {
        cout<<"Padhai karle pehle";
    }
    return 0;
}