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

    // working
    void insertBack(int item)
    {
        Node *nn = new Node(item, nullptr);
        Node *tmp = front;

        if (front == NULL)
        {
            front = nn;
        }
        else
        {
            while (tmp->next != NULL)
            {
                tmp = tmp->next;
            }
            tmp->next = nn;
        }
    }

    // working
    void deleteFront()
    {
        Node *tmp = front;

        if (front == NULL)
        {
            return;
        }
        if (tmp->next == NULL)
        {
            delete tmp;
            tmp = NULL;
            return;
        }
        front = front->next;
        delete tmp;
        tmp = NULL;
    }

    // working
    void deleteBack()
    {
        Node *tmp = front;
        Node *curr = front;

        if (front == NULL)
        {
            return;
        }
        if (tmp->next == NULL)
        {
            delete tmp;
            tmp = NULL;
            return;
        }
        while (tmp->next->next != NULL)
        {
            tmp = tmp->next;
        }
        delete tmp->next;
        tmp->next = NULL;
    }

    // working
    void printNodeList()
    {
        if (front == NULL)
        {
            cout << "There Are NO Nodes!" << endl
                 << endl;
            return;
        }
        while (front != NULL)
        {
            cout << front->data << endl;
            front = front->next;
        }
        cout << endl;
    }

    // working
    void deleteMiddle()
    {
        Node *fptr = front;
        Node *sptr = front;
        Node *prev = front;

        if (front == NULL)
        {
            return;
        }
        if (front->next == NULL)
        {
            delete front;
            return;
        }
        while (fptr->next != NULL)
        {
            fptr = fptr->next;
            prev = sptr;
            sptr = sptr->next;
            if (fptr->next != NULL)
            {
                fptr = fptr->next;
            }
        }
        prev->next = sptr->next;
        delete sptr;
        sptr = NULL;
    }

    // working
    void insertMiddle(int data)
    {
        Node *fptr = front;
        Node *sptr = front;
        Node *prev = front;
        Node *nn = new Node(data, nullptr);

        if (front == NULL)
        {
            front = nn;
            nn->next = NULL;
            return;
        }
        else
        {
            while (fptr->next != NULL)
            {
                fptr = fptr->next;
                prev = sptr;
                sptr = sptr->next;
                if (fptr->next != NULL)
                {
                    fptr = fptr->next;
                }
            }
            prev->next = nn;
            nn->next = sptr;
        }
    }

    void printMinValueNode()
    {
        Node *tmp = front;
        Node *fptr = front;
        Node *sptr = front;

        if (front == NULL)
        {
            cout << "No Min Value" << endl;
            return;
        }
        else
        {
            while (fptr->data > sptr->data && fptr->next != NULL)
            {
            }
        }
    }

    // working
    void deleteAllNodes()
    {
        Node *tmp = front;
        cout << "Deleted All." << endl;

        if (front == NULL)
        {
            return;
        }
        while (front != NULL)
        {
            front = front->next;
            delete tmp;
            tmp = front;
        }
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
        Node *nn = new Node(item, nullptr);

        if (front == NULL)
        {
            front = back = nn;
            return;
        }
        else
        {
            nn->next = front;
            front = nn;
        }
    }

    void insertBack(int item)
    {
        Node *nn = new Node(item, nullptr);
        Node *tmp = front;

        if (front == NULL)
        {
            front = back = nn;
            return;
        }
        else
        {
            while (tmp->next != NULL)
            {
                tmp = tmp->next;
            }
            tmp->next = nn;
            back = nn;
        }
    }

    // working
    void deleteFront()
    {
        Node *tmp = front;

        if (front == NULL)
        {
            return;
        }
        else
        {
            front = front->next;
            delete tmp;
            tmp = NULL;
        }
    }

    // working
    void deleteBack()
    {
        Node *tmp = front;

        if (front == NULL)
        {
            return;
        }
        if (front->next == NULL)
        {
            delete tmp;
            tmp = NULL;
            return;
        }
        else
        {
            while (tmp->next->next != NULL)
            {
                tmp = tmp->next;
            }
            delete tmp->next;
            back = tmp;
            back->next = NULL;
        }
    }

    void deleteMiddle()
    {
        Node *prev = front; //slowers previous ptr
        Node *fptr = front; //faster pointer
        Node *sptr = front; //slower pointer

        if (front == NULL)
        {
            return;
        }
        else
        {
            while (fptr->next != NULL)
            {
                prev = sptr;
                fptr = fptr->next;
                sptr = sptr->next;
                if (fptr->next != NULL)
                {
                    fptr = fptr->next;
                }
            }
            prev->next = sptr->next;
            delete sptr;
            sptr = NULL;
        }
    }

    // working
    void printAll()
    {
        if (front == NULL)
        {
            return;
        }

        while (front != NULL)
        {
            cout << front->data << endl;
            front = front->next;
        }
    }
};

#endif