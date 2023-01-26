#include "iostream"

using namespace std;

int main() {
  float radius, area;
  cout << "Please enter the Radius: " << endl;
  cin >> radius;

  area = 3.1415f * radius * radius;
  cout << "Area: " << area << endl;
}
