#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<(((n<<1)-(n>>1))>n);
    return 0;
}