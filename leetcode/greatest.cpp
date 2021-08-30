#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&arr){
  for(auto &i: arr){
    cin >> i;
  }
}

void display(vector<int>&arr){
  for(auto const i : arr){
    cout << i << " " ;
  }
  cout << endl;
}

vector<int> replaceElements(vector<int> &arr){
  if(arr.size() == 1){
    arr[0] = -1;
    return arr;
  }
  int i = 0, j =0, max = j;
  for(i = 0; i <= arr.size() -2 ; i++){
    for( j = i+1 ; j <= arr.size() - 1 ; j++){
      if(arr[j] >= arr[max]){
	  max = j;
	  arr[i] = arr[max];
	}
    }
    max = j+1;
    cout<<"i: " << i<<" , j : " << j<< " , arr.size() -2 " << arr.size()-2<< endl;

  }
  arr[arr.size()-1] = -1;
  return arr;
}
  int main(){
  int n;
  cin >> n;
  vector<int> arr(n);
  input(arr);
  replaceElements(arr);
  display(arr);

  return 0;
}
    
