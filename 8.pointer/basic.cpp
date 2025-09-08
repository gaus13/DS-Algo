#include<iostream>
using namespace std;

int main(){

    int num = 9;
    // cout << num << endl;

    // to find address of num 
    cout << "address of num is: " << &num << endl;

    int *ptr = &num;
    
    cout << "Value is: " << ptr << endl;  // only ptr gives address that is stored inside it
    cout << "Value is: " << *ptr << endl; // *ptr give the value mapped to the address stored in the ptr

   

    // concept
    int i = 3;
    int *t = &i; 
    cout << (*t) << endl;

    *t = *t + 1;
    cout << *t << endl;

     return 0;
}