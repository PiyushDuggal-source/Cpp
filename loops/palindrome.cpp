#include "iostream"

using namespace std;

int main() {
  int num, rev, actualNum;
  cout << "Enter the Number: ";
  cin >> num;
  actualNum = num;

  while (num > 0) {
    int dig = num % 10;
    num = num / 10;
    rev = rev * 10 + dig;
  }

  if (rev != actualNum) {
    cout << "It is not a palindrome";
  } else {
    cout << "It is a palindrome";
  }
}
