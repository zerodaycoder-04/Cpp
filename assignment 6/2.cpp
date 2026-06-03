#include<iostream>
using namespace std;

int main()
{
    int marks_math,marks_comp;
    cout<<"Enter marks of maths:";
    cin>>marks_math;
    cout<<"Enter marks of computer:";
    cin>>marks_comp;
    cout<<((marks_math >= 85) && (marks_comp >= 90 ) || (marks_comp + marks_math)>190);
    return 0;
}