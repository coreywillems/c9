#ifndef NODE_H
#define NODE_H
using namespace std;

class Node {
    public:
        int data;
        Node *next;
        
        Node(int d=0, Node* n = nullptr) {
            data = d;
            next = n;
        }
};

class SLL {
  private: 
  Node* front;
  
  public:
  SLL() { front = nullptr; }
};

void printList() {
    
}


#endif