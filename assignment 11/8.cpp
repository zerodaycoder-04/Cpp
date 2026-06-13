#include<iostream>
using namespace std;

int main()
{
    int severity , pop_density;
    cout<<"Enter severity:";
    cin>>severity;
    if(severity < 10)
    {
        cout<<"Low-severity";
    }
    else if(severity >= 100)
    {
        cout<<"Extremely high severity";
    }
    else if(severity >= 11 && severity <= 99)
    {
        cout<<"Enter population density:";
        cin>>pop_density;
        if (pop_density >= 10000)
        {
            cout<<"High severity";
        }
        else
        {
            cout<<"Not so high severity";
        }
    }
    return 0;
}