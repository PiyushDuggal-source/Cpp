#include "iostream"

using namespace std;

int main(){
  int arr[5] = {2,3,545,66,4}, key = 66, index = -1;

  for(int i = 0; i < 5; i++){
    if(arr[i] == key){
     index = i; 
    }
  }

  cout << index << endl;
  return 0;
}
