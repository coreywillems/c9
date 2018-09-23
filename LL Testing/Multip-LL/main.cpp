#include "intClass.h"
#include "stringClass.h"
#include "testClass.h"
#include <iostream>

// testing
using namespace std;

//this is a test from online IDE
int main() {
  // intNode for intClass
  intNode *a = new intNode(3, nullptr);
  intNode *b = new intNode(20, nullptr);
  a->next = b;
  intNode *c = new intNode(100, nullptr);
  b->next = c;
  c->next = nullptr;

  printIntList(a);

  // stringNode for stringClass
  stringNode *x = new stringNode("Happy", nullptr);
  stringNode *y = new stringNode("Fucking", nullptr);
  x->next = y;
  stringNode *z = new stringNode("Day", nullptr);
  y->next = z;
  z->next = nullptr;

  printStringList(x);

  // testNode for testNode class
  testNode *m = new testNode('D', nullptr);
  testNode *n = new testNode('G', nullptr);
  m->next = n;
  testNode *o = new testNode('Z', nullptr);
  n->next = o;
  o->next = nullptr;
  printList(m);

  return 0;
}