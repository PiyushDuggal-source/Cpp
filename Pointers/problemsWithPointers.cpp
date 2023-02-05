#include "iostream"

using namespace std;

int main() {

  // 1. Uninitialized Pointers

  int *p;

  // Assigned without initialization
  *p = 34;

  // 2. Memory Leak
  int A[3] = {3, 4, 5};

  p = A;

  // Did not delete the memory
  p = nullptr;

  // 3. Dangling Pointer

  // if we use a Pointer in the main function and another pointer in another
  // function and delete the pointer in THAT funciton then we will no longer be
  // able to access the actual memory.
  return 0;
}
