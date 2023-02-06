#include <iostream>

using namespace std;

// First Function
int add(int x, int y){
  return x + y;
}

// Second Function
int add(int x, int y, int z){
  return x + y + z;
}

// Third Function
int add(float x, float y){
  return x + y;
}

int main(){

  int a = 20, b = 40, c;
  c = add(a, b);    // Its using `First Function`

  int x = 20, y = 30, z = 40;
  c = add(x, y, z); // Its using `Second Function`

  float m = 2.34f, n = 3.24f;
  c = add(m, n);    // Its using `Third Function`

  return 0;
}

// Return type does not considers in Function Overloading
