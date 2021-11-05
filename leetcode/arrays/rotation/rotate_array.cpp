#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&nums){
  for(auto &i : nums){
    cin >> i;
  }
}
void display(vector<int>nums){
  for(auto const i : nums){
    cout << i << " " ;
  }
  cout << endl;
}

void rotate(vector<int>&nums,int k){
  //O(N^2)
  // while(k--){
  //   int temp = nums[nums.size() -1];
  //   for(int i = nums.size() -1 ; i >0; i--){
  //     nums[i] = nums[i-1];
  //   }
  //   nums[0] = temp;
  // }
  int temp = nums[nums.size()-1];
  while(k--){
    for(int i = nums.size() -1 ; i >0; i--){
      int temp2 = nums[i];
      nums[i] = nums[i-1];
      nums[i-1] = temp;
    }
    nums[0] = temp;
  }
}
int main(){
  int n;
  cin >> n;
  vector<int>nums(n);
  input(nums);
  int k;
  cin >> k;
  rotate(nums, k);
  display(nums);
}
