#include<iostream>
using namespace std;

void update_by_ref(int &n){
    n++;
}

void update_by_value(int n){
    n++;
}

int main(){
    // int i = 5;

    // // create a ref

    // int &j = i;

    // cout << i << endl;
    // cout << j << endl;

    // i++;
    //  cout << i << endl;
    //  cout << j << endl;

    // j++;
    // cout << i << endl;
    // cout << j << endl;
    int n = 5;

    cout << "before " << n << endl;
    update_by_value(n);
    cout << "after " << n << endl;

    cout << "before " << n << endl;
    update_by_ref(n);
    cout << "after " << n << endl;



 return 0;
}