#include<iostream>
using namespace std;

int main()
{
    float r,pi=3.14;
    cin>>r;
    float area = pi*r*r;
    cout<<(area > 500);
    cout<<(area < 100);
    cout<<(area == 314);
    return 0;
}

