#include "iostream"

using namespace std;

int main(){
  int Arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int sum = 0;
  int len = sizeof(Arr) / sizeof(int);

  for(int i = 0; i < 10; i++) {
    sum += Arr[i];
  }

  cout << (float)sum/len << endl;
  
}
