#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    cout<<((n<<1)==(n*2)^0);
    return 0;
}