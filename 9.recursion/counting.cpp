#include<iostream>
using namespace std;

void printcount(int n){
    // base case
    if(n==0){
        return ;
    }
    
    // head recursion
    printcount(n-1); 
    cout << n << endl;


    //Tail recursion
    // cout << n << endl;
    // printcount(n-1);  //func calling itself
 
    // cout ke position se kya farq pada 

}

int main(){
    int n;
    cin >> n;

    printcount(n);

    return 0;
}