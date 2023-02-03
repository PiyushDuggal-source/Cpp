#include "iostream"

using namespace std;

int main(){
  int arr[5] = {3,4,65,77,4}, max = 0;

  for(auto x:arr){
    if(x > max){
      max = x;
    }
  }

  cout << max << endl;

  return 0;
}
