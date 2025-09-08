#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    // Check if a character is alphanumeric
    bool valid(char ch) {
        return ((ch >= 'a' && ch <= 'z') || 
                (ch >= 'A' && ch <= 'Z') || 
                (ch >= '0' && ch <= '9'));
    }

    // Convert uppercase to lowercase
    char toLowerCase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    // Check if a string is a palindrome
    bool checkPalindrome(string a) {
        int s = 0;
        int e = a.length() - 1;

        while (s < e) {
            if (a[s] != a[e]) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    // Main function to check if input string is a valid palindrome
    bool isPalindrome(string s) {
        string temp = "";

        for (int j = 0; j < s.length(); j++) {
            if (valid(s[j])) {
                temp.push_back(toLowerCase(s[j]));
            }
        }

        return checkPalindrome(temp);
    }
};

// Entry point (main function)
int main() {
    Solution sol;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);  // Read full line including spaces

    if (sol.isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }

    return 0;
}
