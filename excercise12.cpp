#include <iostream>
using namespace std;

void introduceMe(string name, string city, int age=0){
    cout<<"My name is "<<name<<&endl;
    cout<<"I'm from "<<city<<&endl;
    cout<<"I'm "<<age<<" years old."<<&endl;
}

int main(){
    string name, city;
    int age;
    cout<<"Name: ";
    cin>>name;
    cout<<"City: ";
    cin>>city;
    cout<<"Age: ";
    cin>>age;
    introduceMe(name,city,age);

   return 0;
}