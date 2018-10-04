#include <iostream>
#include "classes.h"
using namespace std;

int main() {
    Node* a = new Node(2);
    Node* b = new Node(4);
    Node* c = new Node(6);
    Node* d = new Node(7);
    
    SLL animals;
    animals.insertBack(10);
    animals.insertBack(20);
    animals.insertBack(30);
    
    animals.printNodeList();

    
    SLL2 animals2;
    animals2.insertFront(28);
    animals2.insertFront(249);
    animals2.insertFront(2);
    animals2.insertBack(222);
    animals2.insertFront(24);
    //animals2.insertFront(99);
    //animals2.insertFront(33);
    //animals2.insertFront(999);
    //animals2.insertBack(233);

    //animals2.deleteFront();

    //animals2.deleteBack(); //outputting pntr adress but data is removed
    animals2.printAll();
 
    return 0;
}