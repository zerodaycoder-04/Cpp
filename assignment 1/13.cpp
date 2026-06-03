#include<iostream>
using namespace std;
int main()
{
    float temp;
    cout<<"Enter tempeature in fahrenheit: ";
    cin>>temp;
    double c = (5.0/9.0)*(temp-32);
    cout<<"Celcius :"<<c;
    return 0;
}
