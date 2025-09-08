#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    // Base case (if size 0 mean arr empty and if 1 item means already sorted)
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining = isSorted(arr+1, size-1);
        return remaining;  //bcs first element has already been checked and thus the size reduced
    }

}



int main(){

    int arr[5] = {1,1,1,3,5};
    int size = 5;

    bool ans = isSorted(arr, size);
    if(ans){
        cout << "Sorted array hai " << endl;
    } 
    else
       cout << "Unsorted array hai ji " << endl;

}