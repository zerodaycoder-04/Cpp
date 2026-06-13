#include<iostream>
using namespace std;

int main()
{
    int dim,sur_qlt,dur_test;
    cout<<"Enter your dimesion:";
    cin>>dim;
    if(dim<90)
    {
        cout<<"Rejected";
    }
    else
    {
        cout<<"Enter you surface quality:";
        cin>>sur_qlt;
        if(sur_qlt>=90)
        {
            cout<<"Certified";
        }
        else
        {
            cout<<"Enter durability score:";
            cin>>dur_test;
            if (dur_test >= 90)
            {
                cout<<"Certified";
            }
            else
            {
                cout<<"Rejected";
            }
        }
    }
    return 0;
}