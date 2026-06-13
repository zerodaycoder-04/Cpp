#include<iostream>
using namespace std;

int main()

{
    int mem_status,books_borrow;
    cout<<"Do you have a membership access? Enter 0 for NO and 1 for YES:";
    cin>>mem_status;
    if (mem_status == 0)
        {
            cout<<"Sorry,You don't have access to the library...";
        }
        else
        {
            if (mem_status == 1)
            {
                cout<<"Enter no. of books borrowed:";
                cin>>books_borrow;
                if (books_borrow>=10 && books_borrow<=100)
                {
                    cout<<"Congtars! You recieve the premium access.";
                }
                else
                {
                    cout<<"Ok! You recieve the standard access";
                }
            }
            else
            {
                cout<<"Invalid choice";
            }
        }
    return 0;
}