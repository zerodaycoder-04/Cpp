#include<iostream>
using namespace std;
int main()
{
    int mar1,mar2,mar3,mar4,mar5;
    cout<<"Enter marks of 5 subjects:\n";
    cin>>mar1>>mar2>>mar3>>mar4>>mar5;
    float total = mar1+mar2+mar3+mar4+mar5;
    float percent = (total/500)*100;
    cout<<"Total = "<<total;
    cout<<"\nPercentage =  "<<percent<<"%";
    return 0;
}
