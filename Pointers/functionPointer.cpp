#include "iostream"

using namespace std;

void display() { cout << "Hello" << endl; }

int main() {

  // Declaration of `Function Pointer`
  void (*fp)();

  // Initialization of `Function Pointer`
  fp = display;

  // Calling the function from Pointer
  (*fp)();

  return 0;
}
