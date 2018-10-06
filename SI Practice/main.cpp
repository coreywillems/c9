#include <iostream>
using namespace std;

class Node {
  public:
  int data;
  Node *next;
  Node * prev;
  
  Node(int d = 0, Node *n = nullptr) {
      data = d;
      next = n;
  }
};

class CLL {
  private:
  Node *header;
  
  public:
  CLL(){ Node *header = new Node(); }
  ~CLL(){ cout << "CLL Destructed!" << endl; }
  
  void printAll() {
      
  }
  
  
    
};

class DLL {
  private:
  Node *front;
  Node *prev;
  
  public:
  DLL(){
      Node *Front = NULL;
      Node *prev = NULL;
  }
  ~DLL(){ cout << "DLL Destructed!" << endl; }
  
  void insertFront(int data) {
      Node *nn = new Node(data, nullptr);
      
      if (front == NULL) {
          front = nn;
      }
      else {
          nn->next = front;
          front = nn;
      }
  }
  
  void printAll() {
      Node *tmp = front;
      
        while( tmp != NULL) {
          cout << tmp->data << endl;
          tmp = tmp->next;
        }
  }
  
};




int main() {
    DLL plants;
    plants.insertFront(3);
    plants.insertFront(88);
    plants.insertFront(1);
    
    CLL seeds;
    
    plants.printAll();
    
    
    return 0;
}