#include<iostream>
using namespace std;

int main()
{
    int income, credit, debt, repayment, employment;

    cout<<"Income verified?";
    cin>>income;

    if(income == 0)
    {
        cout<<"Loan Rejected";
    }
    else
    {
        cout<<"Income Verified!"<<endl;

        cout<<"Credit score satisfactory? ";
        cin>>credit;

        if(credit == 0)
        {
            cout<<"Application sent for Manual Review";
        }
        else
        {
            cout<<"Credit Score Verified!"<<endl;

            cout<<"Debt-to-Income Ratio acceptable?";
            cin>>debt;

            if(debt == 0)
            {
                cout<<"Loan Conditionally Approved";
            }
            else
            {
                cout<<"Debt Ratio Accepted!"<<endl;

                cout<<"Repayment history satisfactory?";
                cin>>repayment;

                if(repayment == 0)
                {
                    cout<<"Application sent for Manual Review";
                }
                else
                {
                    cout<<"Repayment History Verified!"<<endl;

                    cout<<"Employment stable?";
                    cin>>employment;

                    if(employment == 0)
                    {
                        cout<<"Loan Conditionally Approved";
                    }
                    else
                    {
                        cout<<"Loan Approved";
                    }
                }
            }
        }
    }
    return 0;
}