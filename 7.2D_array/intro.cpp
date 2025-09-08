#include<iostream>
using namespace std;

// in cpp we need to pass col size as parameter here '4'
bool isPresent(int arr[][4],int target, int i, int j ){
   for(int i=0; i<3; i++){
     for(int j=0; j<4; j++ ){
        if(arr[i][j] ==  target){
            return 1;
        }
    }
}
 return 0;
}
   

int main(){
    // create 2D array 
    int arr[3][4];

    // if we first want to initialize the value of array then:
    // int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,12,11};

    // if we want to decide value row and col wise itself
    // int arr[2][3] = {{1,11,111}, {2,22,222}};



    // taking input but -> row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    
    // taking input but -> col wise
    // for(int col=0; col<4; col++){   //col<4 bcs four hai col ki value
    //     for(int row=0; row<3; row++){
    //         cin >> arr[row][col];
    //     }
    // }



    // print
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search" << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}