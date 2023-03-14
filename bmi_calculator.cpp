#include <iostream>
using namespace std;
//BMI calculator
// weight(kg)/height * height(m)
//underweight < 18.5
//normal  18.5-24.9
//overweight > 25
int main(){
    float weight,height,bmi;
    cout<<"Please enter weight(kg), hight(m)";
    cin>>weight>>height;
    bmi = weight/(height*height);

    if(bmi<18.5) cout<<"underweight";
        else if(bmi>=18.5 && bmi < 25)
            cout<<"normal";
        else 
            cout<<"overweight";

    cout<<" BMI is: "<<bmi;
}