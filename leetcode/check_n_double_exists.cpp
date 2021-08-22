#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &arr){
  for (auto &i : arr){
    cin >> i;
  }
}

void display(vector<int> arr){
  for(auto const i : arr){
    cout << i << " " ;
  }
  cout << endl;
}

bool checkIfExist(vector<int>&arr){
  int pointer_one = -1, pointer_two = -1;
  for(pointer_one = 0; pointer_one < arr.size(); pointer_one++){
    int n = arr[pointer_one];
    for(pointer_two = pointer_one + 1; pointer_two < arr.size(); pointer_two++){
      int m = arr[pointer_two];
      if( n == (2*m) || m == (2 * n)){
	return true;
      }
    }
  } 
  return false;
}
int main(){
  int n ;
  cin >> n;
  vector<int>arr(n);
  input(arr);
  cout<<"Exist : " << checkIfExist(arr)<<endl;
  display(arr);

  return 0;
}
