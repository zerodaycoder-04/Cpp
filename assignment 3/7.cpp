#include<iostream>
using namespace std;

int main()
{
    int t_marks,max_marks;
    cout<<"Enter total marks and maximum marks: ";
    cin>>t_marks>>max_marks;
    float percent = (max_marks/t_marks)*100;
    cout<<(percent>75);
    cout<<(percent<40);
    cout<<(percent == 100);

    return 0;
}