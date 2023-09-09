#include <iostream>
using namespace std;

int main() {
  int arr[6]={2,4,6,8,10,12};
  //1.LINEAR SEARCH//
  int key = 10;
  int n = 5;
  bool flag =0;
  //traverse the array
  for(int i= 0;i<n;i++){
    if(arr[i]==key){
      flag = 1;

    }
  }
  if (flag ==1){
    cout<<"target found"<<endl;
  }
  else {
    cout<<"target not found"<<endl;
  }
  cout << "Hello world!" << endl;
  return 0;
}
