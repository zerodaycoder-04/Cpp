#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<(((n<<2)+(n>>2))>(4*n));
    return 0;
}
