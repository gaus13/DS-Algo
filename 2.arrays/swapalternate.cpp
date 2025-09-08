#include<iostream>
using namespace std;

void printarr( int arr[], int n){
    for(int i= 0; i<n; i++){
        cout<< arr[i]<< " ";
    }cout<< endl;
}

void swapAlternate(int arr[], int size ){
     for(int i=0; i<size; i=i+2){
        // below line shows ki kya ye elements array ke andar aata hai
        if(i+1< size){
            swap(arr[i], arr[i+1]);
        }
     }
}

/* another way to swap if the swap func not allowed or working
temp = arr[1]
arr[1] = arr[0]
arr[0] = temp */

int main(){
    int even[6]= {5,2,9,4,7,6};
    int odd[5]= {11,33,4,5,1};

    swapAlternate(even,6);
    printarr(even, 6);

    return 0; 
}