#include <iostream>
using namespace std;

// func to count length of string
int getLen(char name[]){

    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count ++ ;

    }
     return count;
}

int main(){
    // make a char array of size 10
    char name[10];

    cout << "Enter your name" << endl ;

    cin >> name;

     cout << "Your name is ";
     cout << name << endl;

     cout << "Length: " << getLen(name) << endl;

     return 0;

}