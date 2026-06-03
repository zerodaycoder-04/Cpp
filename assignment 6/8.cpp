#include<iostream>
using namespace std;

int main()
{
    int waterLevel, motor;
    cout << "Enter water level percentage: ";
    cin >> waterLevel;
    cout << "Enter motor status: ";
    cin >> motor;
    cout << (waterLevel > 95 && motor == 1) << endl;
    cout << (waterLevel < 10 && motor == 0);
    return 0;
}