#include<iostream>
#include<map>
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

bool detectLoop(Node* head){

    if(head == NULL){
        return false;    
    }
   
    map<Node*, bool> visited;

    Node* temp = head;
    while( temp != NULL){

        // cycle is present case
        if(visited[temp] == true){
            cout<< "Present on element: " << temp -> data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}

// algorithm for cycle detection
Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;   // return NULL when list is empty
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // move one step
        fast = fast->next->next;     // move two steps

        if(slow == fast){
            // cycle detected
            cout << "Present at node " << slow -> data << endl;
            return slow;   // returning the meeting point node
        }
    }

    return NULL;   // no cycle found
}

Node* startingLoop(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while (slow != intersection)
    {
        slow = slow -> next;
        intersection = intersection -> next;
    }
    
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startofLoop = startingLoop(head);
    Node* temp = startofLoop;

    while (temp -> next != startofLoop)
    {
       temp = temp -> next;
    }
    
    temp -> next = NULL;

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

    insertAtTail(tail, 101);
    print(head);

    tail -> next = head -> next;
    // deleteNode(2, head);
    //  print(head);
    cout << "head " <<  head-> data << endl;
    cout << "tail " <<  tail-> data << endl;

    if(floydDetectLoop(head) != NULL){
        cout<< "cycle is present" << endl;
    }
    else{
        cout << "No cycle found" << endl;
    }
 
    Node* loop = startingLoop(head);
    cout << "loop starts at: " << loop -> data << endl;

    removeLoop(head);
    print(head);

    return 0;
} 

