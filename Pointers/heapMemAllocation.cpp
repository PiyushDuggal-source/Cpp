#include <iostream>

using namespace std;

int main(){

  int A[4] = {3,4,6,7}; // It is created in the Stack

  int *p;               // It is also created in the Stack

  p = new int[4];       // It is created in the Heap


  // Accessing the Elements

  A[3] = 34;            // | 3 | 4 | 6 | 34 |
  p[3] = 22;            // |   |   |   | 22 |


  // After using the Pointer, we should DEALLOCATE it
  delete p;

  return 0;
}
