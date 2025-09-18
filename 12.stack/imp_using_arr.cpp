#include<iostream>
#include<stack>
using namespace std;

class Stack{
   
    // Properties
    public:
        int *arr;
        int top;
        int size;
    
    // Behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];  //dynamic array decleared above
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow " << endl;
        } 
    }


    void pop(){
        if (top >= 0) {
            top--;
        }
        else{
            cout << "Stack Underflow" << endl;
        }
    }


    int peek(){
        if(top >= 0 ){
            return arr[top];
        }
        else{
            cout << "Stack khaali " << endl;
        }
    }


    bool isEmpty(){
         if(top == -1){
            return true;
         }
         else{
            return false;
         }
    }
         
   


};


int main(){
    
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();
 
    cout << st.peek() << endl;

    st.pop();

    
    
    


/* // creation of stack
    stack<int> s;

    // push in stack
    s.push(3);
    s.push(4);

    // pop
    s.pop();
    
    // top element check
    cout << "printing top element: " << s.top() << endl;

    if(s.empty()){
        cout << "stack is empty" << endl;
    }
    else{
        cout << "stack is not empty " << endl;
    }

    cout << "size is:  " << s.size() << endl;*/



return 0;
}