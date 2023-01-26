#include "iostream"

using namespace std;

int main() {
  int day;
  cout << "Enter the day";
  cin >> day;

  switch (day) {
  case 0:
    cout << "Sunday";
    break;

  case 1:
    cout << "Monday";
    break;

  case 2:
    cout << "Tuesday";
    break;

  case 3:
    cout << "wednesday";
    break;

  case 4:
    cout << "thursday";
    break;

  case 5:
    cout << "friday";
    break;

  case 6:
    cout << "saturday";
    break;

  default:
    cout << "Invalid date";
  }
}
