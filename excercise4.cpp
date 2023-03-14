#include <iostream>
using namespace std;

int toASCII(char ch){
    return int(ch);
}
char fromASCII(int i){
    return char(i);
}

int main(){
    char c1,c2,c3,c4,c5;
    cout<<"Enter letters:"<<&endl;
    cin>>c1>>c2>>c3>>c4>>c5;
    cout<<"ASCII message:"<<toASCII(c1)<<" "<<toASCII(c2)
    <<" "<<toASCII(c3)<<" "<<toASCII(c4)<<" "<<toASCII(c5)<<endl;
    int i1 = toASCII(c1);
    int i2 = toASCII(c2);
    int i3 = toASCII(c3);
    int i4 = toASCII(c4);
    int i5 = toASCII(c5);

    cout<<"Decypher message: "<<&endl;
    cout<<"Message: "<<fromASCII(i1)<<fromASCII(i2)<<fromASCII(i3)<<fromASCII(i4)<<fromASCII(i5);
    
}