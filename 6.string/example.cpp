#include <iostream>
using namespace std;

// this code just prints the string
int main(){
     char name[20];

     cout << "Enter your name" << endl;
    //  cin ke case mein space ke baad wala print nahi karega (tab, enter, new line ye sab bhi)
     cin >> name;

     cout << "Your name is ";
     cout << name << endl;

     return 0;
}

