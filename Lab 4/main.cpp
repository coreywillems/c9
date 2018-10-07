#include <iostream>
#include "classes.h"
using namespace std;

int main()
{
    SLL animals;
    animals.insertBack(10);
    animals.insertBack(11);
    animals.insertBack(20);
    animals.insertBack(30);
    animals.deleteFront(); //deletes 10
    animals.insertBack(31);
    animals.insertBack(32);
    animals.insertBack(333);
    animals.deleteBack();   //deletes 333
    animals.deleteMiddle(); //deletes 30
    animals.insertMiddle(666);

    animals.printNodeList();
    animals.deleteAllNodes();
    animals.printNodeList();

    SLL2 animals2;
    animals2.insertBack(12);
    animals2.insertFront(28);
    animals2.insertFront(249);
    animals2.insertBack(222);
    animals2.insertFront(2);
    animals2.insertFront(1);
    animals2.insertBack(100);

    animals2.deleteFront(); //deletes 1
    animals2.deleteBack();  //deletes 100
    animals2.deleteMiddle(); //removes 28 from middle

    animals2.printAll();

    return 0;
}