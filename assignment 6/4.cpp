#include<iostream>
using namespace std;

int main()
{
    int battery,charging;
    cout<<"Enter battery percentage: ";
    cin>>battery;
    cout<<"Enter charging status: ";
    cin>>charging;
    cout<<(battery>20 && battery <= 100 )<<endl;
    cout<<(battery<=5 && charging == 0);
    return 0;
}
