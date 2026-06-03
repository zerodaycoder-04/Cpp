#include<iostream>
using namespace std;

int main()
{
    int age, permission;
    cin >> age>>permission;
    cout << ((age >= 18) || (age >= 13 && permission == 1));
    return 0;
}