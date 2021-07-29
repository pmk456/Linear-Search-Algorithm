#include "iostream"
using namespace std;
int linear_search(int arr[], int size, int n){
  for(int i=0;i<=size;i++){
    if(arr[i] == n){
      return i;
    }
  }
  return -1;
}
int main(){
  int arr[] = {1, 3, 6, 9, 10, 12, 24, 45, 66, 120};
  int size = sizeof(arr)/sizeof(arr[0]) - 1;
  int result = linear_search(arr, size, 45);
  if(result != -1){
    cout << "Found At index " << result;
  }
  else{
    cout << "Not Found" << endl;
  }
}
  
