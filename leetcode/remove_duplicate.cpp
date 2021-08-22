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

int removeDuplicate(vector<int>&nums){ // nums = { 1 ,2 ,3, 3, 4 ,5 } and val = 3
//1st version
   int k = 0;
   for(int i = nums.size() - 1 ; i >= 0 ; i--){
     if(i == 0){
       break;
     }
     else if(nums[i] == nums[i-1]){
       k++;
       for(int j = i + 1; j< nums.size(); j++){	 
   	 nums[j-1] = nums[j];
       } 
     }
   }
   
   return nums.size() - k;
  // if(nums.size == 0){
  //   return 0;
  // }
  // int i = 0;
  // for(int j = 1; j < nums.size(); j++){
  //   if(nums[j] != nums[i]){
  //     i++;
  //     nums[i] = nums[j];
  //   }
  // }
  // return i+1;
}


int main(){
  int n;
  cin>>n;
  vector<int>nums(n);
  input(nums);  
  
  cout<<"nums.size() - k : \n" << removeDuplicate(nums)<<endl;
  display(nums);
  return 0;
} 
