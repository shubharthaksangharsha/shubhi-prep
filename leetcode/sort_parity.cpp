#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&ivec){
  for(auto &i : ivec){
    cin >> i;
  }
}
void display(vector<int>ivec){
  for(auto const i : ivec){
    cout << i << " " ;
  }
  cout << endl;
}

vector<int>sortArrayByParity(vector<int>&nums){
  if(nums.size() == 0 || nums.size() == 1){
    return nums;
  }
  int right,left;
  left = right = 0;
  while(right < nums.size() ){
    if(nums[right] % 2 != 0){
      right++;
    } else{
      int temp = 0;
      temp = nums[left];
      nums[left] = nums[right];
      nums[right] = temp;
      right++;
      left++;
    }
  }
  return nums;
}

int main(){
  int n;
  cin >> n;
  vector<int>nums(n);
  input(nums);
  sortArrayByParity(nums);
  display(nums);
  return 0;
}
