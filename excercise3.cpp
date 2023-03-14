#include <iostream>
using namespace std;

int main(){
    int yearOfBirth = 1986;
    char gender = 'm'; 
    bool isOfAge = true;
    float averageGrade = 4.5;
    double balance = 54631565.54;

    cout<< "Size of int is "<< sizeof(int)<<" bytes\n";
    // 4 bytes - hoever it is determined by the compiler
    cout<<"Int min value is "<< INT_MIN <<endl;
    // min value is 2 to the power of 256 -2147483648
    cout<<"Int max value is "<<INT_MAX<<endl;
    //max value is 2 to the power of 256 2147483647 - because it is including the zero
    cout<<"Size of unsigned int is: "<<sizeof(unsigned int)<<endl;
    //
    cout<<"Unsigned int max value is: "<<UINT_MAX<<endl;
    //max value of strictly positive integer
    cout<<"Size of unsigned float is: "<<sizeof(float)<<" bytes"<<endl;
    cout<<"Size of unsigned bool is: "<<sizeof(bool)<<" bytes"<<endl;
    cout<<"Size of unsigned char is: "<<sizeof(char)<<" bytes"<<endl;
    cout<<"Size of unsigned double is: "<<sizeof(double)<<" bytes"<<endl;
}