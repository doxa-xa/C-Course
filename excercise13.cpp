#include <iostream>

using namespace std;

bool isPrime(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);



main(){

    cout<<sum(4,3)<<endl;
    cout<<sum(4.4,3.3)<<endl;
    cout<<sum(4.4,3.3,3.3)<<endl;
}
int sum(int a, int b){
    return a+b;
}
double sum(double a, double b){
    return a+b;
}
float sum(float a, float b, float c){
    return a+b+c;
}