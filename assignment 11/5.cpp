#include<iostream>
using namespace std;

int main()
{
    int round_1,round_2;
    cout<<"Enter score of round 1:";
    cin>>round_1;
    if (round_1>= 50)
    {
        cout<<"Enter Score of round 2:";
        cin>>round_2;
        if (round_2 >= 70)
        {
            cout<<"Get ready for the finale!";
        }
        else
        {
            cout<<"Too close, But better luck next time";
        }
    }
    else
    {
        cout<<"Need to try harder!";
    }
    return 0;
}