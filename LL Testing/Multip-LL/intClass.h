#ifndef INT_CLASS_H
#define INT_CLASS_H

using namespace std;

class intNode {
    public:
        int data;
        intNode *next;
        
        intNode(int d=0, intNode *n = nullptr) {
            data = d;
            next = n;
        }
};

void printIntList(intNode *a) {
    cout << "The numbers of the Int LL" << endl;
    for(intNode *temp=a; temp!=nullptr; temp=temp->next) {
        cout << temp->data << endl;
    }
}

#endif