#include <iostream>

using namespace std;

int main() {
  int num, sum = 0, m;
  cout << "Enter the number: ";
  cin >> num;
  m = num;

  while (num > 0) {
    int r = num % 10;
    num = num / 10;
    sum += r * r * r;
  }
  if (sum != m) {
    cout << "This number is not Amstrong number" << endl;
  } else {
    cout << "This number is Amstrong Number" << endl;
  }
}
