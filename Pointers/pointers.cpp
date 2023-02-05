#include "iostream"

using namespace std;

int main() {

  int a = 10;

  // Declaration:
  int *p;

  // Initialization:
  p = &a;

  // Dereferencing:
  cout << *p << endl; // 10

  cout << a << endl;  // 10
  cout << &a << endl; // Address of `a`
  cout << p << endl;  // Address of `a`
  cout << &p << endl; // Address of `p`
  return 0;
}
