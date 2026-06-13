#include<iostream>
using namespace std;

int main()
{
    int apti,prac,exp;
    cout<<"Enter Cyber Aptitute Examination marks:";
    cin>>apti;
    if (apti<60)
    {
        cout<<"Rejected";
    }
    else if (apti>=95)
    {
        cout<<"Selected";
    }
    else if(apti >= 60 && apti <= 94)
    {
        cout<<"Enter practical security assessment marks:";
        cin>>prac;
        if (prac >= 90)
        {
            cout<<"Selected";
        }
        else if(prac <= 70)
        {
            cout<<"Rejected";
        }
        else if (prac >= 71 && prac <= 89)
        {
            cout<<"Enter you Cybersecurity Work Experience:";
            cin>>exp;
            if (exp == 1)
            {
                cout<<"Selected";
            }
            else
            {
                if(exp == 0)
                {
                    cout<<"Placed on Reverse list";
                }
            }
        }
    }
    return 0;
}