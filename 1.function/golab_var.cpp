#include <iostream>
using namespace std;

// Function 'a' takes 'i' by reference
// Any change made here will directly modify the original 'i' from main
void a(int &i){
   i++; // incrementing i (original i in main will also be updated)
   cout << "Inside a (by reference): " << i << endl;
}

// Function 'b' takes 'i' by value
// Changes here do NOT affect the original 'i' in main
void b(int i){
   i = i + 1; // only the copy is modified
   cout << "Inside b (by value): " << i << endl;
}

int main(){
    int i = 5;

    // Calling function a with reference
    a(i); // i becomes 6 here

    // Printing the updated value of i after function a
    cout << "After a, in main: " << i << endl; // prints 6

    // Calling function b with value (copy of i is passed)
    b(i); // prints 7 but i in main remains unchanged

    // Final value of i in main
    cout << "After b, in main: " << i << endl; // still 6

    return 0;  
}
