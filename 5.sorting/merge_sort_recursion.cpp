#include <iostream>
using namespace std;

void merge(int *arr, int s, int e){

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    int mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++){
       second[i] = arr[mainArrayIndex++];
    }

// Merge 2 sorted array
   int index1 = 0;
   int index2 = 0;
   mainArrayIndex = s;

   


}

void mergeSort(int *arr, int s, int e){

    // base case
    if(s > e){
        return;
    }
    
    int mid = s + (e-s)/2;

    // left part
    mergeSort(arr, s, mid);

    // right part
    mergeSort(arr, mid+1, e);

    // merging both
    merge(arr, s, e);

}

