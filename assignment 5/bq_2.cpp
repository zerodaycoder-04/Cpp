#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter n:\n";
    cin>>n;
    int first = n/100; 
    int last = n%10;
    int middle = (n%100)/10;
    cout<<((first == last)&&(middle != 0));
    return 0;
}

