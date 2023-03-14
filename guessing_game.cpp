#include <iostream>
using namespace std;

int main(){
    int hostUserNum,guestUserNum;
    cout<<"Host: ";
    cin>>hostUserNum;
    system("cls");
    cout<<"Guest: ";
    cin>>guestUserNum;

    hostUserNum==guestUserNum ? cout<<"Correct!" : cout<<"Incorrect!";

    system("pause>0");
}