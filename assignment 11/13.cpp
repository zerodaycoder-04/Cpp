#include<iostream>
using namespace std;

int main()

{
    int marks,income,lead_score;
    cout<<"Enter academic score:";
    cin>>marks;
    if (marks< 50)
    {
        cout<<"Rejected";
    }
    else if (marks>=90)
    {
        cout<<"Shortlisted for interview";
    }
    else if(marks >= 50 && marks <= 89)
    {
        cout<<"Enter your family income:";
        cin>>income;
        if (income >= 50000 && income <=500000)
        {
            cout<<"Enter you leadership achievements:";
            cin>>lead_score;
            if(lead_score >= 80)
            {
                cout<<"Shortlisted for interview";
            }
            else
            {
                cout<<"Waitlisted";
            }
        }
        else
        {
            cout<<"Rejected";
        }
    }
    return 0;
}