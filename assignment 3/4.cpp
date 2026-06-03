#include<iostream>
using namespace std;

int main()
{
    int l,b;
    cout<<"Enter length and breadth"<<endl;
    cin>>l>>b;
    int area = l*b;
    cout<<(area>100)<<endl;
    cout<<(area<100)<<endl;
    cout<<(area==100)<<endl; 
    return 0;
}
