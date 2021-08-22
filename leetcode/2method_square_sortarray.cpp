#include<iostream>
#include<vector>
using namespace std;
void square(vector<int>&nums){
  for(int i = 0; i < nums.size(); i++){
    nums[i] = nums[i] * nums[i];
  }
  for(int j = 0 ; j<nums.size(); j++){
    int i = j, min = i ;
    for(; i < nums.size(); i++){
      if(nums[i] <= nums[min]){ 
	min = i;         
      }
    }
    int temp;
    temp = nums[j];
    nums[j] = nums[min];
    nums[min] = temp;
    
  }
  
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
