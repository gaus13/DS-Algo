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

    // destructor
    ~Node(){
        int value = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data "<< value << endl;
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

// if you want to insert at first position then all inserthead function in if case and return 
void insertAtPosition(Node* &head , Node* &tail,  int position, int d ){
    
    // inserting at first
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while (count < position-1)
    {
       temp = temp -> next;
       count++;
    }

    // inserting at last
    if(temp -> next == NULL){
        insertAtTail(tail,d );
        return;
    }

    // creading a node for d which is going to be inserted (heap mein - free hoga using destructor)
    Node* nodeToPut = new Node(d);
    nodeToPut -> next = temp -> next;
    temp -> next = nodeToPut;

}


// Deleting a node
void deleteNode(int position, Node* &head){
        
    // when deleting first node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    
    else{
        // deleting middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while (count < position){
            prev = curr;
            curr = curr -> next;
            count++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        
    }
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

    insertAtHead(head, 14);
    print(head);

    insertAtTail(tail, 100);
    print(head);

    deleteNode(2, head);
     print(head);

    return 0;
} 

