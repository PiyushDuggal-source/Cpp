#include "iostream"

using namespace std;

#define TEN_Per 0.1;
#define Twenty_Per 0.2;

int main(){
  int amount, finalAmount;
  cout << "Enter your amount: ";
  cin >> amount;

  if(amount <= 100){
    cout << "No discount";
  }
  else if (amount > 100 && amount <= 500){
    finalAmount = amount - amount * TEN_Per;
    cout << "Total Amount after 10% discount: " << finalAmount;
  }
  else {
    finalAmount = amount - amount * Twenty_Per;
    cout << "Total Amount after 20% discount: " << finalAmount;
  }
}
