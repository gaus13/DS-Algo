#include<iostream>
using namespace std;

void bubbleSort(int *arr, int size){
    // base case
    if(size == 0 || size == 1){
        return;
    }

    // round 1: send largest element to the end
    for(int i=0; i<size-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    
    bubbleSort(arr, size-1);

}

int main(){
    
    int arr[5];
    
    cout << "Enter the array elements" << endl;
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    bubbleSort(arr,5);

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

 return 0;   
}