#include <iostream>
using namespace std;

int linear(int arr[], int size, int key){
    cout<<"inside the function"<< endl;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int arr[5]= {2,4,5,78,9};
    
    int key;
    cout << "Enter the key to search: ";
    cin>> key;

    cout<<"the key is found at index: "<< linear(arr, 5, key);


}