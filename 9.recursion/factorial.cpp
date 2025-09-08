#include<iostream>
using namespace std;

int factorial(int n){
    // Base case
    if(n==0){
      return 1;
    }
    
    int choti_problem = factorial(n-1);
    int badi_problem = n*choti_problem;
    
    return badi_problem;
}     
// or you can simply return n*factorial(n-1);

int main(){
    int n;
    cin >> n;

    int ans = factorial(n);

    cout << "The factorial is " << ans << endl;

    return 0;
}