#include<iostream>
using namespace std;
int main()
{
    int mark1,mark2;
    cout<<"Enter marks of 2 students:";
    cin>>mark1>>mark2;
    cout<<"did the first student get higher marks? "<<(mark1>mark2)<<endl;
    cout<<"Did both of them scores equal? "<<(mark1==mark2);
    return 0;
}
