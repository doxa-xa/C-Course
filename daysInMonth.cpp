#include <iostream>
using namespace std;

bool isLeapYear(int year){
    return (year%4 == 0 && year%100 != 0 || year%400 == 0);
}

int main(){
    int year, month;
    cout<<"Year, month: ";
    cin>> year >> month;

    switch (month)
    {
    case 2: isLeapYear(year)?cout<<"29 days in month.":cout<<"28 days in month."; break;
    case 4:
    case 6:
    case 9:
    case 11:cout<<"30 days in month.";break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:cout<<"31 days in month.";break;
    default:cout<<"Not valid input!";
    }
}