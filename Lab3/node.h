#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <printf.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int d = 0, Node *n = nullptr)
    {
        data = d;
        next = n;
    }
};

class SLL {
    private:
    Node* front;

    public:
    SLL() { front = nullptr; }

    void insertFront(int item) {
        Node* nn = new Node(item, nullptr);
        if(front == NULL) {
            front = nn;
        }
        else {
            nn->next = front;
            front = nn;
        }
    }

    void insertMiddle(Node* front) {
        Node* slowPTR = front;
        Node* fastPTR = front;

        if (front!=NULL) {
            while(fastPTR != NULL && fastPTR->next != NULL) {
                fastPTR = fastPTR->next->next;
                slowPTR = slowPTR->next;
            }
            printf("middle is [%d]\n\n", slowPTR->data);
        }
    }
/*     void insertToMiddle(int item) {
        Node* nn = new Node(item, nullptr);
        count;
        while(nn != NULL && nn/2=0) {
            nn = nn->next;
        }
    } */

    void printList () {
        Node *name = front;
        cout << endl << "Sll List" << endl;

        while(name != NULL) {
            cout << name->data << endl;
            name = name->next;
        }
    }
};


void printNodeList(Node* name) {

    while(name != NULL) {
        cout << name->data << endl;
        name = name->next;
    }
}

#endif