#include "iostream"

using namespace std;

int main() {
  int year;
  cout << "Enter the Year: ";
  cin >> year;

  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0)
        cout << "Its a leap year";
      else
        cout << "Its not a leap year";
    } else {
      cout << "Its a leap year";
    }
  } else {
    cout << "Its not a leap year";
  }
}
