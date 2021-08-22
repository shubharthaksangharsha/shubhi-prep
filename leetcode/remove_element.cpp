#include<iostream>
#include<vector>
using namespace std;

void input(vector<int>&nums){
  for(auto &i: nums){
    cin>> i;
  }
}

void display(vector<int>&nums){
  for(auto const i: nums){
    cout << i << " ";
  }
  cout << endl;
}

int removeElement(vector<int>&nums, int val){ // nums = { 1 ,2 , 3, 4 ,5 } and val = 3
  
  //1st version
  int n = nums.size();
  int i = 0;
  while( i < n){
    if(nums[i] == val){
      nums[i] = nums[n-1];
      n--;
    }
    else{
      i++;
    }
  }
  return n;
  
  //2nd version:- 2pointers method
  // int i = 0;
  // for(int j = 0; j < nums.size(); j++){
  //   if(nums[j] != val){
  //     nums[i] = nums[j];
  //     i++;
  //   }
  // } 
  //  return i;
}

int main(){
  int n;
  cin>>n;
  vector<int>nums(n);
  input(nums);
  int val;
  cin >> val;
  
  
  cout<<"nums.size() - k : \n" << removeElement(nums,val)<<endl;
  display(nums);
  return 0;
} 
