#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "BABBAR";

    stack<char> s;

    //pushing to stack
    for( int i = 0; i<str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }

    // variable to store ans
    string ans = "";

    // run till stack is empty
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout <<"answer is: "<< ans << endl;
    
    return 0;
}