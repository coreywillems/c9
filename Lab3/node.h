#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

// class that creates nodes to be placed in SLL
class Node
{
  public:
    int data;
    Node *next;

    Node(int d = 0, Node *n = nullptr)
    {
        data = d;
        next = n;
    }
};

// traverses the node list and prints all out
void printNodeList(Node *name)
{
    while (name != NULL)
    {
        cout << name->data << endl;
        name = name->next;
    }
    cout << endl;
}

/* void deleteLastNodeInNodeList() {

} */

class SLL
{
  private:
    Node *front, *last;

  public:
    SLL()
    {
        cout << "Contructed SLL! Howdy" << endl;
        front = NULL;
        last = NULL;
    }
    ~SLL() { cout << "Deconstructed SLL! Adios" << endl; }

    // inserts into the beggining of a SLL
    void insertFront(int item)
    {
        Node *tmp = new Node(item, nullptr);
        if (front == NULL)
        {
            front = tmp;
        }
        else
        {
            tmp->next = front;
            front = tmp;
        }
    }

    // not totally working, only prints the middle
    void insertMiddle(Node *front)
    {
        Node *slow = front;
        Node *fast = front;

        if (front != NULL)
        {
            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            cout << "middle is " << slow->data << endl
                 << endl;
        }
    }

    // prints all nodes of a SLL
    void printList()
    {
        Node *name = front;
        while (name != NULL)
        {
            cout << name->data << endl;
            name = name->next;
        }
        cout << endl;
    }

    // deletes the last node in a SLL
    void deleteLast()
    {
        Node *current = new Node;
        Node *previous = new Node;
        current = front;
        while (current->next != NULL)
        {
            previous = current;
            current = current->next;
        }
        last = previous;
        previous->next = NULL;
        delete current;
    }

    //deletes the middle node from a SLL
    void deleteMiddle()
    {
        Node *curr = front;
        Node *first = front;
        Node *prev = NULL;
     
        int count = 0;
        int middleNode = 0;

        while (curr != NULL)
        {
            ++count;
            curr = curr->next;
        }

        if (count % 2 == 0)
        {
            middleNode = (count / 2) - 1;
        }
        else
        {
            middleNode = count / 2;
        }

        for(int i=0; i<count; i++) {
            if(i==middleNode) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
                
            }
            else { 
                
                //curr = first->next;//first stays at first. so should be curr = curr 0=

                prev = curr;
                curr = prev->next;
                first = curr->next;
                }
        }

        cout << "There are " << count << " nodes in the second SLL" << endl;
        cout << "The middle Node is " << middleNode+1 << endl;
    }
};

#endif