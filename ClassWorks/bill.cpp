#include<iostream>
using namespace std;
int main()
{
    float  pizza = 60.00;
    float  burger = 150.00;
    float  pasta =  200.00;
    float  coffee =  70.00;
    float  drink =  50.00;
    int qtypiz , qtybur , qtypas, qtycoff, qtydrink;
    cout<<"Quantity of burger?";
    cin>>qtybur;
    cout<<"Quantity of pizza?";
    cin>>qtypiz;
    cout<<"Quantity of pasta?";
    cin>>qtypas;
    cout<<"Quantity of coffee?";
    cin>>qtycoff;
    cout<<"Quantity of drink?";
    cin>>qtydrink;
    int total_bur = burger * qtybur;
    int total_piz = pizza * qtypiz;
    int total_pas = pasta * qtypas;
    int total_coff = coffee * qtycoff;
    int total_dir = drink * qtydrink;
    int total_bill = total_bur + total_coff + total_dir + total_pas + total_piz;

    cout<<"=========TOTAL BILL==========="<<endl;
    cout<<"Burger\t"<<qtybur<<"\t"<<total_bur<<endl;
    cout<<"Pizza\t"<<qtypiz<<"\t"<<total_piz<<endl;
    cout<<"Pasta\t"<<qtypas<<"\t"<<total_pas<<endl;
    cout<<"Coffee\t"<<qtycoff<<"\t"<<total_coff<<endl;
    cout<<"Drinks\t"<<qtydrink<<"\t"<<total_dir<<endl;
    cout<<"Total Bill amount\t"<<total_bill;
   return 0;
}
