#include<iostream>
using namespace std;

// passing pointer in function
void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    p = p+1;
    cout << "Inside value of update func" << p << endl;
    
    *p = *p + 1; //this will change the value of before and after but above will not(to know more dry run)

}



int main(){
    int value = 5;
    int *p = &value;

    print(p);
    
    cout << "Before" << p << endl;
    update(p);

   cout << "after" << p << endl;


    return 0;

}