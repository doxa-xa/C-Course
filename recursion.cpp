#include <iostream>
using namespace std;
//sum numbers between m-n
int sum(int m, int n){
    int sum = 0;
    if(m<n){
        for(int i = m; i<=n; i++){
            sum+=i;
        }
    }
    return sum;
}
int recursive_factorial(int m, int n){
    if(m == n){
        return m;
    }
    return m * recursive_factorial(m+1,n);
}

int main(){
    int m,n;
    cout<<"Enter start and end of the numbers: ";
    cin>>m>>n;
    // int s = sum(m,n);
    int s = recursive_factorial(m,n);
    cout<<s;
}