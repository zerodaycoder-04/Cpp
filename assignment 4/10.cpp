#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int half = a/2;
    int last = a%10;
    cout<<(half == last);
    return 0;
}
