#include <iostream>
#include "node.h"
using namespace std;

int main()
{
//node list
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

//inserts a new first node
    Node *lizzard = new Node(23, nullptr);
    lizzard->next = corey;

//inserts into the middle of the list
    Node *snake = new Node(99, nullptr);
    madeline->next = snake;
    snake->next = sake;

    SLL first;
    first.insertFront(10);
    first.insertFront(5);
    first.insertFront(22);

//what are the difference between the . and ->
    SLL *second = new SLL();
    second->insertFront(12);
    second->insertFront(99);
    second->insertFront(2);
    second->insertFront(23);
    second->insertFront(33);
    second->insertFront(0);

//uses void PrintNodeList() to print each node
    cout << "Node List:" << endl;
    printNodeList(lizzard);

    second->insertMiddle(lizzard);
    cout << "SLL First" << endl;
    first.printList();
    cout << "SLL Second" << endl;
    second->printList();

//deletes the last node in list and prints new list
    second->deleteLast();
    cout << "Second list after last deletion" << endl;
    second->printList();

//deletes the middle node of a SLL
    second->deleteMiddle();
    cout << endl << "Second list after middle deletion" << endl;
    second->printList();

    return 0;
}