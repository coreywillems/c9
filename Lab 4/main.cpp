#include <iostream>
#include "classes.h"
using namespace std;

int main() {
    Node* a = new Node(2);
    Node* b = new Node(4);
    Node* c = new Node(6);
    Node* d = new Node(7);
    
    SLL2 animals;
    animals.insertFront(22);
    animals.insertFront(24);
    animals.insertFront(99);
    //animals.insertFront(1);
    //animals.insertFront(999);
    animals.insertBack(23);

    //animals.deleteFront();

    //animals.deleteBack();
    animals.printAll();
 
    return 0;
}