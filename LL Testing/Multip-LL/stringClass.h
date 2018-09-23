#ifndef STRING_CLASS_H
#define STRING_CLASS_H

#include <string>

using namespace std;

class stringNode
{
  public:
    string data;
    stringNode *next;

    stringNode(string d, stringNode *n = nullptr)
    {
        data = d;
        next = n;
    }
};

void printStringList(stringNode *x)
{
    cout << endl
         << "Now for the String LL: " << endl;
    for (stringNode *temp = x; temp != nullptr; temp = temp->next)
    {
        cout << temp->data << endl;
    }
}

#endif