#include<iostream>
using namespace std;

int main()

{
    int age,edu_stat,phy_fit,med_stat,lead_score,psy_score,interview;
    cout<<"Enter age:";
    cin>>age;
    if (age<18)
    {
        cout<<"Not eligible";
    }
    else
    {
        cout<<"Age Verified!"<<endl;
        cout<<"Is your educational qualification verified?";
        cin>>edu_stat;
        if(edu_stat == 0)
        {
            cout<<"Not eligible";
        }
        else if(edu_stat == 1)
        {
            cout<<"Educational Qualification Verified!"<<endl;
            cout<<"Enter your physical fitness score:";
            cin>>phy_fit;
            if(phy_fit <80)
            {
                cout<<"Fitness badhao beta";
            }
            else
            {
                cout<<"You are fit for training!"<<endl;
                cout<<"Is your medical status done?";
                cin>>med_stat;
                if (med_stat == 0)
                {
                    cout<<"Medical staus not done!";
                }
                else if(med_stat == 1)
                {
                    cout<<"Medical checkup done!"<<endl;
                    cout<<"Enter leadership assessment score:";
                    cin>>lead_score;
                    if (lead_score<=69)
                    {
                        cout<<"Leadership score not matched";
                    }
                    else 
                    {
                        cout<<"Leaded well!"<<endl;
                        cout<<"Enter your Psychological Score:";
                        cin>>psy_score;
                        if(psy_score <=69)
                        {
                            cout<<"Psycological score not matched";
                        }
                        else
                        {
                            cout<<"Shortlisted for interview!"<<endl;
                            cout<<"Enter your interview score:";
                            cin>>interview;
                            if (interview >= 70)
                            {
                                cout<<"Candidate Shorlisted";
                            }
                            else
                            {
                                cout<<"Better luck next time.";
                            }
                        }
                    }
                }
            }
        }

    }
    return 0;
}