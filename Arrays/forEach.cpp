#include <iostream>

using namespace std;

int main(){
  int A[5] = {1,2,3,4,5};

  for(int x: A){
    cout<< x << endl;
  }

  for (auto x: A){
    cout << x << endl;
  }

  for (int &x: A){
    cout << x << endl;
  }
}
