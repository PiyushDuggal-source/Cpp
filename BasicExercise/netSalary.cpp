#include "iostream"

using namespace std;

int main() {
  float netSalary, basicSalary, perOfAllow, perOfdeduct;
  cout << "what is your basic salary? ";
  cin >> basicSalary;
  cout << "what is your Percentage of Allowances? ";
  cin >> perOfAllow;
  cout << "what is your Percentage of Deduction? ";
  cin >> perOfdeduct;

  netSalary = basicSalary + basicSalary * perOfAllow / 100 -
              basicSalary * perOfdeduct / 100;

  cout << "Your net salary is " << netSalary;
}
