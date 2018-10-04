#include <iostream>
#include "classes.h"
using namespace std;

int main() {
    Node* a = new Node(2);
    Node* b = new Node(4);
    Node* c = new Node(6);
    Node* d = new Node(7);
    
    SLL animals;
    animals.insertBack(1);
    animals.insertBack(2);
    animals.insertBack(3);
    
    animals.printNodeList();

    
    SLL2 animals2;
    animals2.insertFront(22);
    animals2.insertFront(24);
    animals2.insertFront(99);
    animals2.insertFront(33);
    animals2.insertFront(999);
    //animals2.insertBack(23);

    //animals2.deleteFront();

    //animals2.deleteBack();
    animals2.printAll();
 
    return 0;
}