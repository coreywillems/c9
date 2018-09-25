#include <iostream>
#include "node.h"
using namespace std;


int main() {
    Node <int>* p;
    p = front;
    
    Node* corey = new Node(2, nullptr);
    
    Node* madeline = new Node(6, nullptr);
    corey->next = madeline;
    
    Node* sake = new Node(90, nullptr); 
    madeline->next = sake;
    
    Node* mochi = new Node(33, nullptr);
    sake->next = mochi;
    
    Node* plants = new Node(20, nullptr);
    mochi->next = plants;
    plants->next = nullptr;
    
    return 0;
}