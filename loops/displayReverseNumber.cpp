#include "iostream"

using namespace std;

int main(){
  int num;
  cout << "Enter the Number: ";
  cin >> num;
  while(num > 0){
    int r = num%10;
    num = num/10;
    cout << r;
  }
  cout << endl;
  return 0;
}
