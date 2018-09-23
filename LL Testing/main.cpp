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
};

void forPrintList(Node *a)
{
    Node *temp = a;
    for (Node *temp = a; temp != nullptr; temp = temp->next)
    {
        cout << temp->data << endl;
    }
}

int main()
{
    Node *a = new Node(3, nullptr);

    Node *b = new Node(20, nullptr);
    a->next = b;

    Node *c = new Node(100, nullptr);
    b->next = c;
    c->next = nullptr;

    forPrintList(a);
    //    whilePrintList(a);

    return 0;
}