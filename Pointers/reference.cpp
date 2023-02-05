#include "iostream"

using namespace std;

int main() {

  int x = 10;
  int &y = x; // `y` is now an Alias/ NickName for `x`

  x++; // 11
  y++; // 12

  cout << x << endl; // 12
  cout << y << endl; // 12

  // NOTE: Reference will not occupy ANY memory.
  // NOTE: We cannot make it as an Alias/ NickName for any other variable.
  return 0;
}
