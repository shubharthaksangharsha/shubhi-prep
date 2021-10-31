#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&nums){
  for(auto &i : nums){
    cin >> i ;
  }
}
void display(vector<int>nums){
  for(auto const i : nums){
    cout << i << " " ;
  }
  cout << endl;
}

int removeElement(vector<int> &nums, int val){
  int k = 0;
  int right, left;
  right = left = nums.size()-1;
  while(right >= 0){
    if(nums[right] != val){
      cout << " if " << endl;
      right--;
    } else{
      cout << " else " << endl;
      int temp = 0;
      temp = nums[left];
      nums[left] = nums[right];
      nums[right] = temp;
      left --;
      right --;
      k++;
    }
  }
  return nums.size() - k;
}
int main(){
  int n;
  cin >> n;
  vector<int>nums(n);
  input(nums);
  int val;
  cin >> val;
  removeElement(nums, val);
  display(nums);
  
}
