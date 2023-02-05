#include <stdio.h>
int i, j, k;
void swap(int array[], int i, int j) {
  int temp;
  temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

void printing(int array[], int size) {
  printf("The sorted array is : \n");
  for (k = 0; k < size; k++) {
    printf("%d\n", array[k]);
  }
}

void bubblesort(int array[], int size) {
  for (i = 0; i < size; i++) {
    for (j = 1; j < (size - i); j++) {
      if (array[i] > array[j]) {
        swap(array, j - 1, j);
      }
    }
  }
}

int main() {
  int a[] = {45, 22, 4, 12, 24, 19, 34, 16, 39};
  int n = sizeof(a) / sizeof(int);
  bubblesort(a, n);
  printing(a, n);
  return 0;
}
