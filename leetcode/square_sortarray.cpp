#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> square(vector<int>&nums){
  for(int i = 0; i < nums.size(); i++){
    nums[i] = nums[i] * nums[i];
  }
  std::sort(nums.begin(), nums.end());

 
  return nums;
}


void display(vector<int>&nums){
  for(auto &i: nums){
    cout<< i << " " ;
  }
  cout << endl;
}

void input(vector<int>&nums){
  for(auto &i : nums){
    cin>>i;
  }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    input(nums);
    square(nums);
    display(nums);
   
}
