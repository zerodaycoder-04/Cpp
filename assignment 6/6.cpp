#include<iostream>
using namespace std;

int main()
{
    int acc_bal,with_amt,status;
    cin>>acc_bal>>with_amt>>status;
    cout<<(with_amt>0)&&(with_amt <= acc_bal)&&(status == 1);
    return 0;
}