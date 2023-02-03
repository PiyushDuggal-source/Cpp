#include <iostream>

using namespace std;

int main() {

  int arr[10] = {2, 4, 6, 7, 8, 12, 34, 35, 44, 54};
  int low = 0, height = 9, key, mid;

  cout << "Enter key: ";
  cin >> key;

  while (low <= height) {
    mid = (low + height) / 2;
    if (arr[mid] == key) {
      cout << "found" << arr[mid] << endl;
      return 0;
    } else if (arr[mid] > key)
      height = mid - 1;
    else
      low = mid + 1;
  }
  cout << "Not Found" << endl;

  return 0;
}
