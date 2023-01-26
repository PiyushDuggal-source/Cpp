#include <cmath>
#include <iostream>

using namespace std;
// Area Of Triangle
void area_of_triangle() {
  float b, h;
  cout << "Enter Base and Height of Triangle: ";
  cin >> b >> h;
  cout << 0.5 * b * h << endl;
}

// Perimeter of Rectangle
void permeter_of_rectangle() {
  float l, b;
  cout << "Enter lenght and Breadth of Rectangle: ";
  cin >> l >> b;
  cout << 2 * (l + b) << endl;
}
// Sum of N Numbers
void sum_of_N_Numbers() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  cout << n * (n + 1) / 2 << endl;
}

// Sum of AP Series
void sum_of_AP_series() {
  int a, d, n;
  cout << "Enter a, d, and n: ";
  cout << a + (n - 1) * d << endl;
}

// Single root of Quadratic equation
float root_of_quadratic_eq(float a, float b, float c) {
  float D;
  // discriminant
  D = b * b - 4 * a * c;
  return (-b + std::sqrt(D)) / (2 * a);
}

// Speed
float speed(float v, float u, float a) {
  return (pow(v, 2) - pow(u, 2)) / (2 * a);
}

// Area of Circle
float area_of_circle(float r) { return 3.1415f * r * r; }

int main() {

  int a = 2, b = 7;
  area_of_triangle();
  permeter_of_rectangle();

  return 0;
}
