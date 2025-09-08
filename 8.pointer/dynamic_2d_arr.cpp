#include<iostream>
using namespace std;


int main(){

/*we can also create n*m array but just
  including row and col size input, and put n=row or col thats it*/ 

    
    int n;
    cin >> n;

    // creating 2D array dynamic way
    int **arr = new int *[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }


// Taking input
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin >> arr[i][j];
    }
}

// Taking output
cout << endl;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout << arr[i][j] << " ";
    } cout << endl;
}

// releasing memory
// heap clean->
for(int i=0; i<n; i++){
    delete [] arr[i];
}

// stack clean
delete []arr;

return 0;
}