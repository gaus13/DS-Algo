#include<iostream>
using namespace std;

int oddeven(int a){

    if(a % 2== 0){
        cout << "the no is even"<< endl;
    }
    else{
        cout << "the no is odd "<< endl;
    }

}

int main(){
    int a;
    cin >> a;
   
 oddeven(a);
    
    
    return 0;

}