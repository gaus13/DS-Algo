#include<iostream>
using namespace std;

class Hero{
    public:
    
    int health;
    
    // DEFAULT CONSTRUCTOR
    /* A constructor is a special member function that is automatically called when an object is created. 
    It has the same name as the class and is used to initialize object attributes. */
    Hero(){
        cout << "I AM A CONSTRUCTOR" << endl;
    }

    // Parametrized constructor
    Hero(int health){
    cout << "Address of current object (this):" << this << endl;
    this -> health = health;
    }

void printHealth(){
    cout << "Health: "<< health << endl;
}
};



int main(){
  
// Object created statically
Hero ramesh(10);
ramesh.printHealth();

// dynamically creating
Hero *h = new Hero(); //bracket is optional/ calls default constructor
h -> health = 20;
h -> printHealth();

delete h; //clean up dynamic memory
return 0;

}