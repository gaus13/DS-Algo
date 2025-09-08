#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
    for(int i =s; i<=e; i++){
        cout << arr[i] << " " ;
    } cout << endl;
}

bool binarySearch(int arr[], int s, int e, int key){
     
    cout << endl;
     print(arr, s, e);


    //Base case: element not found does not exist, 
    if(s>e){
         return -1;
    }

    
    int mid = s + (e-s)/2;

    // Base case: mid is equal to key
    if(arr[mid]== key){
        return true;
    }

    if(arr[mid] < key){
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr, mid-1, s, key);
    }

}


int main(){
   
    int arr[6] = {2,4,6,8,10,12};
    int size = 6;
    int key = 12;
    
    cout << "present or not: " << binarySearch(arr,0, 5, 12) << endl;
    
return 0;
}