#include<iostream>
using namespace std;

int main()
{
    int passengers,weight;
    cout<<"Enter total no. of passengers: ";
    cin>>passengers;
    cout<<"Enter their weight: ";
    cin>>weight;
    cout<<((0< passengers && passengers<=10) && (0 <= weight && weight<700));
    return 0;
}
