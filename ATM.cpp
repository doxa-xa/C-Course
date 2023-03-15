#include <iostream>

using namespace std;

void showMenu(){
    cout<<"**********MENU**********"<<&endl;
    cout<<"1. Check balance"<<&endl;
    cout<<"2. Deposit"<<&endl;
    cout<<"3. Withdraw"<<&endl;
    cout<<"4. Exit"<<&endl;
    cout<<"************************"<<&endl;
}

int main(){

    int option;
    double balance = 500;
    system("cls");
    do
    {
        showMenu();
        cout<<"Option: ";
        cin>>option;
        switch (option)
        {
        case 1: cout<<"Balance is: "<<balance<<" $"<<&endl; break;
        case 2: cout<<"Deposit amount: ";
            double deposit;
            cin>>deposit;
            balance += deposit;
            break;
        case 3: cout<<"Withdraw amount: ";
            double withdraw;
            cin>>withdraw;
            if(withdraw<=balance)
                balance -= withdraw;
            else
                cout<<"Insufficient balance."<<&endl;
            break;
        }
    } while (option != 4);
    
}