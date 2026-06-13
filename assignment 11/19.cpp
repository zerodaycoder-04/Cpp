#include<iostream>
using namespace std;

int main()
{
    int qualification, technicalScore, pressureTest, emergencyScore, medical, interviewScore;

    cout<<"Academic Qualification Verified?";
    cin>>qualification;

    if(qualification == 0)
    {
        cout<<"Rejected: Academic Qualification Not Met";
    }
    else
    {
        cout<<"Academic Qualification Verified!"<<endl;

        cout<<"Enter Technical Assessment Score: ";
        cin>>technicalScore;

        if(technicalScore < 70)
        {
            cout<<"Rejected: Technical Assessment Failed";
        }
        else
        {
            cout<<"Technical Assessment Cleared!"<<endl;

            cout<<"Enter Pressure Simulation Test Score: ";
            cin>>pressureTest;

            if(pressureTest < 70)
            {
                cout<<"Rejected: Pressure Simulation Test Failed";
            }
            else
            {
                cout<<"Pressure Simulation Test Cleared!"<<endl;

                cout<<"Enter Emergency Response Test Score: ";
                cin>>emergencyScore;

                if(emergencyScore < 70)
                {
                    cout<<"Rejected: Emergency Response Test Failed";
                }
                else
                {
                    cout<<"Emergency Response Test Cleared!"<<endl;

                    cout<<"Medical Examination Passed?";
                    cin>>medical;

                    if(medical == 0)
                    {
                        cout<<"Rejected: Medical Examination Failed";
                    }
                    else
                    {
                        cout<<"Medical Examination Cleared!"<<endl;

                        if(technicalScore >= 95 && pressureTest >= 95 && emergencyScore >= 95)
                        {
                            cout<<"Fast-Tracked for Mission!"<<endl;
                            cout<<"Mission Status: Selected";
                        }
                        else
                        {
                            cout<<"Enter Mission Interview Score: ";
                            cin>>interviewScore;

                            if(interviewScore >= 70)
                            {
                                cout<<"Mission Status: Selected";
                            }
                            else
                            {
                                cout<<"Mission Status: Rejected";
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}