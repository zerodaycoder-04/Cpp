#include<iostream>
using namespace std;

int main()
{
    int tabSwitch, disconnect;
    cout << "Enter tab switching count: ";
    cin >> tabSwitch;
    cout << "Enter internet disconnection count: ";
    cin >> disconnect;
    cout << (tabSwitch > 5 || disconnect > 3) << endl;
    cout << (tabSwitch > 5 && disconnect > 3);
    return 0;
}