#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&arr){
  for(auto &i: arr){
    cin>>i;
  }
}

void display(vector<int>&arr){
  for(auto const i: arr){
    cout<<i<<" " ;
  }
  cout<<endl;
}

void duplicate(vector<int>&arr){
  int i,j;
  i = j = 0;
  while(i < arr.size()){
    if(arr[i] == 0){
      for(j = arr.size() -2 ; j>=i ; j--){
	arr[j+1] = arr[j];
      }
      i = i +1 ;
    }
    i = i +1;
  }
}   

int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  input(arr);
  display(arr);
  duplicate(arr);
  display(arr);

  return 0;

}
