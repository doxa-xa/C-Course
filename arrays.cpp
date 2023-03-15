#include <iostream>
using namespace std;

int main(){

    int size;
    cout<<"Size: "<<endl;
    cin>>size;
    //int myArray[size];
    int* myArray = new int [size];
    for(int i=0;i<size;i++){
        cout<<"Array["<<i<<"]=";
        cin>>myArray[i];
    }
    for(int i=0;i<size;i++){
        //cout<<"Array["<<i<<"]="<<myArray[i]<<endl;
        cout<<"Array["<<i<<"]="<<*(myArray+i)<<endl;
    }

    delete [] myArray;
    myArray =NULL;

    return 0;
}