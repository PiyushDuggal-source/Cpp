#include "iostream"

using namespace std;

int & func(int &a){
  cout << a << endl;
  return a;
}

int main ()
{
  int x= 10;

  // Here func is acting as the Reference to `x`
  func(x) = 30;

  cout << x << endl; // 30
  return 0;
}
