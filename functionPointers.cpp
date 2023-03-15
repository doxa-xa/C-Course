#include <iostream>

using namespace std;

int getMin(int arr[], int size){
    int min = arr[0];
    for(int i = 1;i < size; i++){
        if(arr[i]<min)
            min = arr[i];
    }
    return min;
}

int getMax(int arr[], int size){
    int max = arr[0];
    for(int i = 1;i < size; i++){
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}
void getMinAndMax(int arr[], int size, int* min, int* max){
    for(int i = 1;i < size; i++){
        if(arr[i]>*max)
            *max = arr[i];
        if(arr[i]<*min)
            *min = arr[i];
    }
}

int main(){

    int numbers[5] = {12,16,17,26,7};
    // cout<<"min is: "<<getMin(numbers,5)<<endl;
    // cout<<"max is: "<<getMax(numbers,5)<<endl;

    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers,5,&min,&max);
    cout<<"min is: "<<min<<endl;
    cout<<"max is: "<<max<<endl;

    return 0;
}