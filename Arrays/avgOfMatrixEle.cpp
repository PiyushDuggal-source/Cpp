#include "iostream"

using namespace std;

int main() {
  int Mat[3][3] = {{2, 4, 5}, {3, 4, 5}, {343, 5, 6}}, sum = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      sum += Mat[i][j];
    }
  }

  cout << (float)sum / 3 << endl;
}
