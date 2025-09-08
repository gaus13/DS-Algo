#include<iostream>
using namespace std;

// To print row wise sum
void printSum(int arr[][3], int i, int j){
    cout << "Printing the sum of row" << endl;
    for(int i=0; i<3; i++){
        // row me enter kiya and sum =0 karke cols ka sum kiya as shown below
        int sum = 0;
        for(int j=0; j<3; j++){
           sum = sum + arr[i][j];  //sum += arr[i][j]; 
        }
        cout << sum << endl;
    }
    cout << endl;
}

// column wise sum
void printcolSum(int arr[][3], int i, int j){
    cout << "Printing the sum of col" << endl;
    for(int j=0; j<3; j++){
        // row me enter kiya and sum =0 karke cols ka sum kiya as shown below
        int sum = 0;
        for(int i=0; i<3; i++){
           sum = sum + arr[i][j];  //sum += arr[i][j]; 
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main(){
    int arr[3][3];

    cout << "Enter the elements of thr array" << endl;

    // input
    for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j] ;
        }
    }
    

    // print
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printcolSum(arr, 3 ,3);

    return 0;
}