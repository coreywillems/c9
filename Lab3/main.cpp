#include <iostream>
#include "node.h"
using namespace std;

int main() {

    Node *corey = new Node(2, nullptr);

    Node *madeline = new Node(6, nullptr);
    corey->next = madeline;

    Node *sake = new Node(90, nullptr);
    madeline->next = sake;

    Node *mochi = new Node(33, nullptr);
    sake->next = mochi;

    Node *plants = new Node(20, nullptr);
    mochi->next = plants;
    plants->next = nullptr;

    Node *lizzard = new Node(23, nullptr);
    lizzard->next = corey;

    Node *snake = new Node(99, nullptr);
    madeline->next = snake;
    snake->next = sake;




    SLL first;
    first.insertFront(10);
    first.insertFront(5);
    first.insertFront(22);

    SLL* second = new SLL();
    second->insertFront(12);
    second->insertFront(99);
    second->insertFront(2);
    second->insertFront(23);

    cout << "Node List:" << endl;
    printNodeList(lizzard);
    second->insertMiddle(lizzard);
    cout << "SLL First" << endl;
    first.printList();
    cout << "SLL Second" << endl;
    second->printList();
    
    second->deleteLast();
    cout << "First list after last deletion" << endl;
    second->printList();




    return 0;
}