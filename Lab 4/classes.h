#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>
using namespace std;

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
    //   ~Node() { cout << "Node destructed" << endl; }
};

class SLL
{
    private:
        Node *front;

    public:
        SLL() { front = NULL; }
        ~SLL() { cout << "SLL destructed" << endl; }

//working
    void insertBack(int item)
    {
        Node* tmp = new Node(item, nullptr);
        Node* last = front;
        
        if(front == NULL) {
            front = back = 7tmp;
        }
        else {
            while (last->next != NULL) 
            {
                last = last->next;
            }
            last->next = tmp;
        }
        
    }

    void deleteFront()
    {
    }

    void deleteBack()
    {
    }

//working
    void printNodeList()
    {
        Node* tmp = front;

        while (tmp != NULL) 
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
        cout << endl;
    }

    void deleteMiddle()
    {
    }

    void insertMiddle()
    {
    }

    void printMinValueNode()
    {
    }

    void deleteAllNodes()
    {
    }
};

class SLL2
{
  private:
    Node *front, *back;

  public:
    SLL2()
    {
        front = NULL;
        back = NULL;
    }
    ~SLL2() { cout << "SLL2 destructed" << endl; }

    void insertFront(int item)
    {
        Node *tmp = new Node(item, nullptr);
        //Node* front = front;

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

    void insertBack(int item)
    {
        Node *tmp = new Node(item, nullptr);
        //Node* front = front;
        Node* back = back;

        if (front == nullptr  /* && back == nullptr */ ) {
            front = back = tmp;
            return;
        }
        else {
            back->next = tmp;
            back = tmp;
        }
    }

  //working
    void deleteFront()
    {
        Node *tmp = new Node();

        if (front == NULL)
        {
            return;
        }
        tmp = front;
        front = front->next;
        delete tmp;
    }

//working I think
    void deleteBack()
    {
        Node *tmp = front;
        //Node *tmp = new Node();

        if (front == NULL) {
            return;
        }
        if (front->next == NULL) {
            delete front;
            front = back = nullptr;
            return;
        }
        while (tmp->next != back)
        {
            tmp = tmp->next;
        }
        back = tmp;
        delete back;
        back = nullptr;
    }

    void deleteMiddle()
    {
    }

//working
    void printAll()
    {
        Node* tmp = front;
            while (tmp != NULL)
            {
                cout << tmp->data << endl;
                tmp = tmp->next;
            }
    }
};

#endif