#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter how many total items are there: "<<endl;
    cin>>n;
    cout<<"Enter each box can hold how many items? "<<endl;
    cin>>k;
    cout<<"Full boxes = "<<n/k<<endl;
    cout<<"Remaining boxes = "<<n%k<<endl;
    return 0;
}


