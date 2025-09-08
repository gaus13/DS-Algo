#include<iostream>
using namespace std;

void update(int **p2){
    // will there be any change in this case: NO
    // p2 = p2+1;

    // change hoga: YES
    // *p2 = *p2 + 1;

    // change hoga: YES
    **p2 = **p2 + 1;
}

int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    // cout << endl << "Sab theek chal rha hai" << endl ;
    // cout << "PRinting p- " << p << endl;
    // cout << "Address of p-  " << &p << endl;
    // cout << *p2 << endl;

    // // all three will give the same value
    // cout << i << endl;
    // cout << *p << endl; 
    // cout << **p2 << endl;

    // // give same-> address of i
    //  cout << &i << endl;
    //  cout << p << endl;
    //  cout << *p2 << endl;

    cout << endl << endl;
    cout << "Before " << i << endl; 
    cout << "Before " << p << endl; 
    cout << "Before " << p2 << endl; 

    update(p2);

    cout << "After " << i << endl; 
    cout << "After " << p << endl; 
    cout << "After " << p2 << endl; 
     cout << endl << endl;
}