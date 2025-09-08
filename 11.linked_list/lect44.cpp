#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node *next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

// reference of head is taken bcs we want to make changes in our original LL. not in copy of it
void insertAtHead(Node* &head, int d){   

    // new node create
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){   

    // new node create
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp;  // or tail = temp -> next;  
}

void print(Node* &head){
    Node * temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}

int main(){
    
    // created new node
    Node *node1 = new Node(13);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
    
    // head pointed to node one
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 100);
    print(head);

    return 0;
} 

