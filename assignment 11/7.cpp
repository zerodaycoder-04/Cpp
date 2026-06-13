#include<iostream>
using namespace std;

int main()
{
    int m_active , m_spend;
    cout<<"Enter months active:";
    cin>>m_active;
    if(m_active < 6)
    {
        cout<<"No reward";
    }
    else if(m_active >= 40)
    {
        cout<<"You will recieve premium benefits";
    }
    else if(m_active >= 6 && m_active <= 39)
    {
        cout<<"Enter monthly spending:";
        cin>>m_spend;
        if (m_spend >= 10000)
        {
            cout<<"You will recieve premium benefits";
        }
        else
        {
            cout<<"You will recieve standard benefits";
        }
    }
    return 0;
}