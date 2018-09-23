#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int volume(int length, int width, int height) {
  int volumeOfBox;
  volumeOfBox = length * width * height;

  return volumeOfBox;
}

void rootOfInt(int &x) {
  int xRef;
  xRef = sqrt(x);
  cout << "The root of " << x << " is " << xRef << endl;
  x = xRef;
  return;
}

void intSquared(int *squaredNum) {
  int power = 2;
  int base = *squaredNum;

  cout << *squaredNum << " squared is ";
  *squaredNum = pow(power, base);
  cout << *squaredNum << endl;
  return;
}

int reverseVec(vector<int> &reversal) {
  vector<int> reversed;
  // int digit = reversal[0];

  for (int i = 7; i < reversal.size(); i--) {
    reversed.push_back(reversal[i]);
  }

  /*
  do {
    for (int i = 0; i < reversal.size(); i++)
      reversed.push_back(reversal[i]);
  } while (reversal.back() != 0);
*/

  for (unsigned i = 0; i < reversed.size(); i++) {
    cout << reversed[i] << ",";
  }

  return 0;
}

int main() {

  int x = 25;
  int squareNum = 6;
  vector<int> reversal = {1, 2, 3, 4, 5, 6};

  for (unsigned i = 0; i < reversal.size(); i++) {
    cout << reversal[i] << ",";
  }

  cout << endl << "The volume is: " << volume(2, 1, 2) << endl;
  rootOfInt(x);
  intSquared(&squareNum);
  reverseVec(reversal);

  for (unsigned i = 0; i < reversal.size(); i++) {
    cout << reversal[i] << ",";
  }

  // cout << x << " " << squareNum << endl;

  return 0;
}
