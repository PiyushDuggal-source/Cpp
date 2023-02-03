#include <iostream>

using namespace std;

int main() {
  int n, sum;
  cout << "Number: ";
  cin >> n;

  for (int i = 0; i <= n; i++) {
    sum += i;
  }
  cout << "Sum of " << n << " Numbers is: " << sum<< endl;
}
