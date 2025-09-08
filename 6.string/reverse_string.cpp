#include <iostream>
using namespace std;

void reverse(char name[], int n){
    int start = 0;
    int end = n-1;

    while(start<end){
        swap(name[start++], name[end--]);
    }
}

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

     int length = getLen(name);

     cout << "Length: " << length << endl;
     reverse(name, length);
     cout <<"Your reversed name is : " << name<< endl ;

     return 0;

}