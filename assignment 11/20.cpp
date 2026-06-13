#include<iostream>
using namespace std;

int main()
{
    int codingScore, systemThinkingScore, communicationScore;
    int leadershipScore, innovationScore, executiveInterviewScore;

    cout<<"Enter Coding Assessment Score: ";
    cin>>codingScore;

    if(codingScore < 60)
    {
        cout<<"Rejected";
    }
    else
    {
        cout<<"Coding Assessment Cleared!"<<endl;

        cout<<"Enter System Thinking Assessment Score: ";
        cin>>systemThinkingScore;

        if(systemThinkingScore < 60)
        {
            cout<<"Rejected";
        }
        else
        {
            cout<<"System Thinking Assessment Cleared!"<<endl;

            cout<<"Enter Communication Assessment Score: ";
            cin>>communicationScore;

            if(communicationScore < 60)
            {
                cout<<"Rejected";
            }
            else
            {
                cout<<"Communication Assessment Cleared!"<<endl;

                cout<<"Enter Leadership Assessment Score: ";
                cin>>leadershipScore;

                if(leadershipScore < 60)
                {
                    cout<<"Rejected";
                }
                else
                {
                    cout<<"Leadership Assessment Cleared!"<<endl;

                    cout<<"Enter Innovation Assessment Score: ";
                    cin>>innovationScore;

                    if(innovationScore < 60)
                    {
                        cout<<"Rejected";
                    }
                    else
                    {
                        cout<<"Innovation Assessment Cleared!"<<endl;

                        if(codingScore >= 95 &&
                           systemThinkingScore >= 95 &&
                           communicationScore >= 95 &&
                           leadershipScore >= 95 &&
                           innovationScore >= 95)
                        {
                            cout<<"Executive Leadership Offer";
                        }
                        else
                        {
                            cout<<"Enter Executive Interview Score: ";
                            cin>>executiveInterviewScore;

                            if(executiveInterviewScore >= 90)
                            {
                                cout<<"Executive Leadership Offer";
                            }
                            else if(executiveInterviewScore >= 80)
                            {
                                cout<<"Senior Leadership Offer";
                            }
                            else if(executiveInterviewScore >= 70)
                            {
                                cout<<"Standard Offer";
                            }
                            else if(executiveInterviewScore >= 60)
                            {
                                cout<<"Waitlist";
                            }
                            else
                            {
                                cout<<"Rejection";
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}