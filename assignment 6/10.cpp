#include<iostream>
using namespace std;

int main()
{
    int temperature, cooling;
    cin >> temperature>>cooling;
    cout << (temperature < 90 && cooling == 1) << endl;
    cout << (temperature > 120 || cooling == 0);

    return 0;
}