#ifndef TEST_CLASS_H
#define TEST_CLASS_H

using namespace std;

class testNode {
    public:
        char data;
        testNode *next;
        testNode *currNode;
        testNode *prevNode;
 //       prevNode = NULL;
 //       currNode = *c;
        
        testNode(char d, testNode *n = nullptr) {
            data = d;
            next = n;
        }
// this needs to be worked on
        while (currNode != NULL) {
            prevNode = currNode;
            currNode = currNode->next;
        }
};

void printList(testNode *m) {
    cout << endl;
    for(testNode *temp = m; temp != nullptr; temp=temp->next) {
        cout << temp->data << endl;
    }
}

#endif