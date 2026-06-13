#include<iostream>
using namespace std;

int main()
{
    int fitness_Score , performance_score;
    cout<<"Enter fitness score:";
    cin>>fitness_Score;
    if(fitness_Score >= 90)
    {
        cout<<"You are qualified";
    }
    else if(fitness_Score >= 30 && fitness_Score <= 89)
    {
        cout<<"Enter performance score:";
        cin>>performance_score;
        if (performance_score >= 90)
        {
            cout<<"You are qualified";
        }
         else
        {
        cout<<"Rejected";
        }
    }
    else
    {
        cout<<"Rejected";
    }
    return 0;
}