#include <iostream>

using namespace std;

int main(){
  int num, rev;
  cout << "Enter the Number: ";
  cin >> num;
  
  while(num > 0){
    int dig = num%10;
    num = num/10;
    rev = rev * 10 + dig;
  }


  cout << rev << endl;
}
