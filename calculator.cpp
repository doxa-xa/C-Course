#include <iostream>
using namespace std;

int main(){
    float num1,num2;
    char operation;

    cout<<"Calculator app"<<&endl;
    cin>>num1>>operation>>num2;
    switch (operation)
    {
    case '+':cout<<num1<<operation<<num2<<"="<<num1+num2;break;
    case '-':cout<<num1<<operation<<num2<<"="<<num1-num2;break;
    case '*':cout<<num1<<operation<<num2<<"="<<num1*num2;break;
    case '/':cout<<num1<<operation<<num2<<"="<<num1/num2;break;
    case '%':
        bool isNum1Int, isNum2Int;
        isNum1Int = ((int)num1==num1);
        isNum2Int = ((int)num2==num2);
        if(isNum1Int&&isNum2Int)cout<<num1<<operation<<num2<<"="<<int(num1)%int(num2);
        else cout<<"Not valid operation";break;
    default:cout<<"Please enter a valid operation: +,-,*,/,%";break;
    }


    system("pause>0");
}