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

    SLL() { front = NULL; }
    ~SLL() { cout << "SLL destructed" << endl; }

    void insertBack()
    {
    }

    void deleteFront()
    {
    }

    void deleteBack()
    {
    }

    void printNodeList()
    {
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

        if (front == NULL) {
            front = back = tmp;
            return;
        }
        back->next = tmp;
        back = tmp;
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
    while (front != NULL && front->next != NULL)
    {
        cout << front->data << endl;
        front = front->next;
    }
    }
};

#endif