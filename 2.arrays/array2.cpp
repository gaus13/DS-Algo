#include <iostream>
using namespace std;

int getmax(int arr[], int n){
    int max = INT8_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int size;
    cout<< "input the size" << endl;
    cin>> size;
    int arr[109];

    // taking input in array
    for(int i=0; i<size; i++){
        cin>> arr[i];

    }

    
    cout << "max value is "<< getmax(arr, 4)<< endl;
}