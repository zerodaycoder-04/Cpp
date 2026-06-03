//Input radius and check whether circumference is greater than area.

#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter radius:\n";
    cin>>r;
    int area = 3.14 *r *r;
    int cir = 2*3.14*r;
    cout<<(area>cir);
    return 0;
}

