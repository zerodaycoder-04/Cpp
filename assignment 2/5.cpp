#include<iostream>
using namespace std;
int main()
{
    int l,b,w;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"enter breadth: ";
    cin>>b;
    cout<<"enter width: ";
    cin>>w;
    int inner_area = l*b;
    int outer_length = l+2*w;
    int outer_breadth = b+2*w;
    int outer_area = outer_length*outer_breadth;
    cout<<"Outer area = "<<outer_area<<endl;
    cout<<"Border area = "<<outer_area-inner_area;

    return 0;
}