#include<iostream>
using namespace std;

int main()
{
    int register_stats, auth_stats;
    cout<<"Do you have registration?";
    cin>>register_stats;
    if (register_stats == 0)
    {
        cout<<"Pehle register karke aao bhai!";
    } 
    else if(register_stats == 1)
    {
        cout<<"Do you have a reserved parking authorization?";
        cin>>auth_stats;
        if (auth_stats == 0)
        {
            cout<<"Sorry bhai...Parking authorization leke aao!";
        }
        else
        {
            cout<<"Welcome Mere Yaar";
        }
    }
    else
    {
        cout<<"Bhaag Yahase!";
    }
    return 0;
}