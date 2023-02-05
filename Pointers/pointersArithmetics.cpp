#include "iostream"

using namespace std;

int main() {

  int A[4] = {23, 33, 4, 66};

  int *p = A;

  // It will move to the next location of the Array, i.e. 33, it will point to
  // A[1]
  p++;
  p--;

  // Incrementing by a value

  p = p + 2; // it means it will move by 2 INTEGERS.
  p = p - 2;

  int *q = &A[2];

  // Subtraction of two pointers

  int d = q - p; // it will store the distance between the two pointers/ no. of elements

  return 0;
}
