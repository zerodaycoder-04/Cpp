#include<iostream>
using namespace std;

int main()
{
    int speed,visibility;
    int risky = (speed>=80 || visibility <= 20);
    int extremely_dangeorous = (speed >= 80 && visibility <= 20);
    cout<<"RISKY: "<<(risky || extremely_dangeorous);
    cout<<"Extremely dangeorus: "<<(risky && extremely_dangeorous);
    return 0;
}


