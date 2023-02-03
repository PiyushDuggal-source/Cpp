// If the sum of the factors of the number is double the number then the number
// is Perfect number

#include <iostream>

using namespace std;

int main() {
  int n, sum = 0;
  cout << "Number: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  if (sum == n * 2)
    cout << "Perfect Number" << endl;
  else
    cout << "Not Perfect" << endl;
}
