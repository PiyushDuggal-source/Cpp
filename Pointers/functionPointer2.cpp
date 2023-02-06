#include "iostream"

using namespace std;

int max(int x, int y) { return x > y ? x : y; }
int min(int x, int y) { return x < y ? x : y; }

int main() {

  // Declaration of Funciton Pointer
  int (*fp)(int, int);

  // Initialization of Function Pointer
  fp = max;

  (*fp)(10, 5); // INFO: Here `max` is called

  fp = min;

  (*fp)(10, 5); // INFO: Here `min` is called
  return 0;
}

// One function pointer can Point of any function which is having same Signation
