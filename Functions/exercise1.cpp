#include <iostream>

using namespace std;

int findEleIndex(int arr[], int size, int search) {

  int index = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] == search)
      index = i;
  }
  return index;
}

int main() {
  int array[5] = {3, 4, 6, 7, 3};
  int size = 5;
  int index = findEleIndex(array, size, 6);
  cout << "index of the search element is: " << index << endl;
}
