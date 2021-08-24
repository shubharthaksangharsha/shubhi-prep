#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&arr){
  for(auto &i : arr){
    cin >> i;
  }
}

void display(vector<int> arr){
  for(auto const i : arr){
    cout << i << " " ;
  }
  cout << endl;
}

bool validMountainArray(vector<int>&arr){
  bool flag = false, res= false;
  int i = 0;
  while(i+1 < arr.size() && arr[i] < arr[i+1]){
    i++;
  }
  if(i ==0 || i == arr.size()-1){
    return false;
  }
  while(i+1 < arr.size() && arr[i] > arr[i+1]){
    i++;
  }
        
  return (i == arr.size() - 1);
}
int main(){
  int n;
  cin >> n;
  vector<int>arr(n);
  input(arr);
  cout<<"Array is mountain : \n" <<validMountainArray(arr)<<endl;
  display(arr);

  return 0;
}
  
  
