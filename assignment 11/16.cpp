#include<iostream>
using namespace std;

int main()
{
    int maths,prog,research;
    cout<<"Enter score of maths:";
    cin>>maths;
    cout<<"Enter score of programming:";
    cin>>prog;
    if (maths >= 90 && prog >= 90 )
    {
        cout<<"Bypassed stage 3..AI Fellowship approved!";
    }
    else
    {
        cout<<"Enter score of research potential:";
        cin>>research;
        if (maths >= 75 && prog >= 75 && research >= 75 )
        cout<<"AI Fellowship approved!";
        else 
        {
        cout<<"Upgraded for Research Interview!";
        }
    return 0;
    }
}
