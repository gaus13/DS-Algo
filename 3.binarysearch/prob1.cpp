#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    // mid can also be written as(just to be safe and not exceed int max limit)
    // start = (end-start)/2 "solve karke wahi aata hai"

    while(start <= end){ //iska mtlb ye hai ki start end se aage na nikle

        if(arr[mid]==key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid - 1;
        }

        mid = (start+end)/2;

    }
    return -1;
}

int main(){
    int evenarr[5] = {2,4,6,8,10};
    int oddarr[5] = {1,3,5,7,9};

    int index = binarySearch(evenarr, 5, 2);

    cout << "Index of the element is: "<< index << endl;

    return 0;
}