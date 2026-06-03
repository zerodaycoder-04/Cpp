#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    int ch1 = (int)c - 1;
    int ch2 = (int)c + 1;
    char ch_before = (char)ch1;
    char ch_after = (char)ch2;
    cout<<ch_before<<endl;
    cout<<ch_after<<endl;
    return 0;
}

