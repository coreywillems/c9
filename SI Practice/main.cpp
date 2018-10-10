#include <iostream>
#include "class.h"
using namespace std;

int main() {

  DLL plants;
  plants.insertFront(2);
  plants.insertFront(1);
  
  plants.print();
  return 0;
}