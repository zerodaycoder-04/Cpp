#include <iostream>
using namespace std;
int main()
{
    int a = 12,b = 5,c = 2;
    int c1 = c; //c1 = 2 c = 2
    c = a+b;//a = 12 b= 5 c = 17
    a = c1;
    cout<<a<<"\n";
    cout<<c<<endl;
    return 0;
}