#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"Enter the sides of the triangle\n";
    cin>>a>>b>>c;
    if((a==b)&&(b==c)){
        cout<<"The triangle is equilateral";
    }else if((a!=b)&&(b!=c)&&(a!=c)){
        cout<<"The triangle is scalene";
    }else{
        cout<<"The triangle is isosceles";
    }
}