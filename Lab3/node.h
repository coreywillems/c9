#ifndef NODE_H
#define NODE_H
#include <iostream>
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
            cout << "middle is " << slowPTR->data << endl << endl;
        }
    }

    // void deleteLast(Node* front) {
    //     Node* currNode = front;
    //     Node* nextNode = front->next;
    //     while(nextNode != NULL) {
    //         currNode = nextNode;
    //         nextNode = nextNode->next;
    //         }
    //         delete currNode;
    // }
    
    void deleteLast(Node *frontpts) {
        if(frontpts == NULL)
        return;
        
        if(frontpts->next == NULL) {
            delete frontpts;
            frontpts = NULL;
            return;
        }
        Node* tmp = frontpts;
        while (tmp->next && tmp->next->next != NULL) {
            tmp = tmp->next;
        }
        delete tmp->next;
        tmp->next = NULL;
    }
    
    void printList () {
        Node *name = front;
        while(name != NULL) {
            cout << name->data << endl;
            name = name->next;
        }
        cout << endl;
    }
    
};


void printNodeList(Node* name) {

    while(name != NULL) {
        cout << name->data << endl;
        name = name->next;
    }
    cout << endl;
}

#endif