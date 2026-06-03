#include<iostream>
using namespace std;
int main()
{
    int total,c_note,c_pen,c_eras;
    cin>>total>>c_note>>c_pen>>c_eras;
    cout<<total - (c_note+c_pen+c_eras);
    return 0;
}