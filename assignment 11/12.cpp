#include<iostream>
using namespace std;

int main()
{
    int tech_score, endu_score,research_exp,interview;
    cout<<"Enter Technical Assessment score:";
    cin>>tech_score;
    if(tech_score>95)
    {
        cout<<"Selected";
    } 
    else if(tech_score<65)
    {
        cout<<"Rejected";
    }
    else if(tech_score>=65 && tech_score<=94)
    {
        cout<<"Proceeding to Physical Endurance Evaluation test...";
        cout<<"Enter endurance score:";
        cin>>endu_score;
        if(endu_score < 65)
        {
            cout<<"Rejected";
        }
        else if(endu_score >= 65)
        {
            cout<<"Do you have any research experience?";
            cin>>research_exp;
            if(research_exp == 0)
            {
                cout<<"You are in the waitlist";
            }
            else if(research_exp == 1)
            {
                cout<<"Final Interview stage:";
                cin>>interview;
                if(interview == 1)
                {
                    cout<<"Selected";
                }
                else if(interview == 0)
                {
                    cout<<"You are in waitlist";
                }

            }
        }
    }
    return 0;
}