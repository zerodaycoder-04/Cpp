#include<iostream>
using namespace std;

int main()
{
    int dist,marks;
    cout<<"Enter distance:";
    cin>>dist;
    if (dist>= 5000)
    {
        cout<<"You will be alloted a room in hostel";
    }
    else
    {
        cout<<"Enter marks of your last examination:";
        cin>>marks;
        if (marks >= 80)
        {
            cout<<"You will be alloted a room in hostel";
        }
        else
        {
            cout<<"Ghar pe raho";
        }
    }
    return 0;
}