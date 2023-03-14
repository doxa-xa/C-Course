#include <iostream>
using namespace std;

int main(){
    // addition
    cout<<5+2<<endl;
    //division of int
    cout<<5/2<<endl;
    //division of float or double
    cout<<5/2.0<<endl;
    //the remainder of the division of 2 whole numbers
    cout<<5%2<<endl;
    //unary operators ++,--
    int counter = 5;
    //postincrement
    counter++;
    cout<<counter<<endl;
    //postdecrement
    counter--;
    cout<<counter<<endl;
    //preincrement
    ++counter;
    cout<<counter<<endl;
    //predecrement
    --counter;
    cout<<counter<<endl;
    system("cls");
    int a,b;
    a=5;
    b=8;
    // relational operators:
    cout<<(a==b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    system("cls");
    // logical operators:
    cout<<(a == 5 && b== 5)<<endl;
    cout<<(a == 5 || b== 5)<<endl;
    cout<<!(a == 5 && b== 5)<<endl;



}