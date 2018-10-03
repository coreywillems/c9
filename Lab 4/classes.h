#ifndef CLASSES_H
#define CLASSES_H
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    
        Node(int d = 0, Node* n = nullptr) {
            data = d;
            next = n;
        } 
        ~Node(){ cout << "Node destructed" << endl; }
};

class SLL {
    private:
        Node* front;
    
        SLL() { front = NULL; }
        ~SLL(){ cout << "SLL destructed" << endl; }
        
    void insertBack() {
        
    }
    
    void deleteFront() {
        
    }
    
    void deleteBack() {
        
    }
    
    void printNodeList() {
        
    }
    
    void deleteMiddle() {
        
    }
    
    void insertMiddle() {
        
    }
    
    void printMinValueNode() {
        
    }
    
    void deleteAllNodes() {
        
    }
    
    
};

class SLL2 {
    private:
        Node *front, *back;
    
    public:
        SLL2() {
            front = NULL;
            back = NULL;
        }
        ~SLL2() { cout << "SLL2 destructed" << endl; }
        
    void insertFront(int item) {
        Node* tmp = new Node(item, nullptr);
        
        if(front == NULL) {
            front = tmp;
        }
        else {
            tmp->next = front;
            front = tmp;
        }
        
    }
    
    void insertBack(int item) {
        Node* p = new Node(item, nullptr);
        if(back == NULL) {
            
        }
        
    }
    
    void deleteFront() {
        
    }
    
    void deleteBack() {
        
    }
    
    void deleteMiddle() {
        
    }
    
    void printAll() {
        // Node* name = front;
        // while(name != NULL) {
        //     cout << name->data << endl;
        //     name = name->next;
        // }
        
        while(front != NULL) {
            cout << front->data << endl;
            front = front->next;
        }
    }
};



#endif