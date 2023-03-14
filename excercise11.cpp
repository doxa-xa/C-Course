#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x;
    char c;
    cout<<"Enter width and height: "<<&endl;
    cin>>x;
    cout<<"Enter symbol for the shape: "<<&endl;
    cin>>c;
    for(int i=x;i>=0;i--){
        for(int j=i;j>=0;j--){
            cout<<setw(3)<<c;
        }
        cout<<&endl;
    }
}