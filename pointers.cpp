#include <iostream>

using namespace std;

void printNumber(int* numberPtr){
    cout<<*numberPtr<<endl;
}
void printLetter(char* charPtr){
    cout<<*charPtr<<endl;
}
void print(void* ptr, char type){
    switch (type)
    {
    case 'i':cout<<*((int*)ptr)<<endl; break;
    case 'c':cout<<*((char*)ptr)<<endl; break;
    case 'd':cout<<*((double*)ptr)<<endl; break;
    case 'f':cout<<*((float*)ptr)<<endl; break;
    case 'b':cout<<*((bool*)ptr)<<endl; break;
    default:
        break;
    }
}


int main(){
    
    // int n = 5;
    // cout<<&n<<endl;

    // int* ptr = &n;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    
    // *ptr = 10;
    // cout<<*ptr<<endl;
    // cout<<n<<endl;

    // int v;
    // int* ptr2 = &v;
    // *ptr2 = 7;
    // cout<<"v= "<<v<<endl;

    // int number = 65;
    // char letter = 'a';
    // printNumber(&number);
    // printLetter(&letter);
    // print(&letter,'c');
    // print(&number,'i');

    int luckyNumbers[5]; 
    // cout<<luckyNumbers<<endl;
    // cout<<&luckyNumbers[0]<<endl;
    // cout<<luckyNumbers[2]<<endl;
    // cout<<*(luckyNumbers+2)<<endl;
    
    for(int i=0;i<5;i++){
        cout<<"Number: ";
        cin>>luckyNumbers[i];
    }
    for(int i=0;i<5;i++){
        cout<<*(luckyNumbers+i)<<" ";
    }

    return 0;
}