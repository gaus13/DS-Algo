#include <iostream>
using namespace std;

bool isPalindrome(string str, int i, int j){
    // Base case
    if(i > j)
      return true;

    if(str[i] != str[j])
      return false;
    else{
        return isPalindrome(str, i+1, j-1);
    }  

}


int main(){
    
    string name = "ana";
    cout << endl;

    bool kyaPalindrome = isPalindrome(name, 0, name.length()-1 );
    
    if(kyaPalindrome){
        cout << "The given string is a palindrome" << endl;

    }
    else{
        cout << "NOT a Palindrome" << endl;
    }
    

return 0;
}