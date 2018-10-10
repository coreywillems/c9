#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <string>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        
        Node(int d, Node* n = NULL, Node* p = NULL) {
            data = d;
            next = n;
            prev = p;
        }
};

class DLL {
    private:
        Node* front;
        Node* back;
        
    public:
        DLL() {
            Node* front = NULL;
            Node* back = NULL;
        }
        ~DLL() { cout << "DLL destructed!" << endl; }
        
    void print() {
        if (front == NULL) {
            return;
        }
        
        while(front != NULL) {
            cout << front->data << endl;
            front = front->next;
        }
    }
        
    void insertFront(int item) {
        
        Node* nn = new Node(item, nullptr, nullptr);
        Node* tmp = front->next;
        
        if(front == NULL) {
            front = back = nn;
            return;
        }
        else {
            nn->next = tmp;
            //tmp->prev = nn;
            front = nn;
        }
        
    }
    
    void insertBack(){
        
    }
        
      
    
};


class CLL {
    private:
        Node* header;
  
    public:
        CLL () {
            Node* header = NULL;
        }
        ~CLL () { cout << "CLL destructed!" << endl; }
        
    void insertFront() {
        
    }
    
    void insertBack(){
        
    }
    
};

#endif
