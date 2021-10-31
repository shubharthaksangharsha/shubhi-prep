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
    cout << i << " ";
  }
  cout << endl;
}
//using Extra Temp Array
// void move_zeros(vector<int>&nums){
//   int count_zero = 0;
//   vector<int> temp;
//   for(int i = 0; i < nums.size(); i ++){
//     if(nums[i] != 0){
//       temp.push_back(nums[i]);
//     } else {
//       count_zero++;
//     }
//   }
//   cout << count_zero << " " << temp.size() << endl;
//   for(int i = 0; i < temp.size(); i++){
//     nums[i] = temp[i];
//   }
//   for(int i = nums.size() -1 ; i >= 0; i--){
//     if(count_zero == 0){
//       break;
//     }
//     nums[i] = 0;
//     count_zero--;
//   }
// }


// using O(1) space
void move_zeros(vector<int> &nums){
  if(nums.size() == 0 || nums.size() == 1){
    return;
  }
  int n = nums.size();
  int right,left;
  left = right = 0;
  while(right < n){ // 0 1 0 3 12 
    if(nums[right] == 0){
      right++;
    } else{
      int temp = 0;
      temp = nums[left];
      nums[left] = nums[right];
      nums[right] = temp;
      left++;
      right++;      
    }
  }
}
int main(){
  int n;
  cin >> n;
  vector<int>ivec(n);
  input(ivec);
  move_zeros(ivec);
  display(ivec);
}
