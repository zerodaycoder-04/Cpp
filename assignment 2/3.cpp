#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter an amount:\n";
    cin>>amount;
    int amount_500 = amount/500;
    int rem_500 = amount % 500;
    
    int amount_100 = rem_500/100;
    int rem_100 = rem_500 % 100;
    
    int amount_50 = rem_100/50;
    int rem_50 = rem_100 % 50;

    int amount_10 = rem_50/10;
    int rem_10 = rem_50 % 10;

    int amount_5 = rem_10/5;
    int rem_5 = rem_10 % 5;

    int amount_1 = rem_5/1;
    int rem_1 = rem_5 % 1;

    cout<<"500: "<<amount_500<<endl;
    cout<<"100: "<<amount_100<<endl;
    cout<<"50: "<<amount_50<<endl;
    cout<<"10: "<<amount_10<<endl;
    cout<<"5: "<<amount_5<<endl;
    cout<<"1: "<<amount_1<<endl;
    return 0;
}