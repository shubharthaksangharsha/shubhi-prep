#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void input(vector<int>&nums){
   for(auto &i : nums){
       cin >> i;
   }
}
void display(vector<int>nums){
    for(auto const i : nums){
        cout << i << ' ' ;
    }
    cout << endl;
}
int distinct(vector<int>&nums){
  //O(N) Approach : Using Sum approach formula 
  // formula : (n * (n+1)) / 2 => to get the sum of array including missing number.
  // int sum = 0;
  // for(auto i : nums){
  //   sum+= i;
  // }
  // int n = nums.size() + 1;
  // return (n * (n - 1) / 2 ) - sum;
  //Method 2 : XOR method  by using XOR propoerty i.e a ^ b ^ b = a (because b ^ b = 0)
    int xor1 = 0, xor2 = 0;
    for(int i = 0; i < nums.size(); i++){
      xor1 ^= nums[i];
    }
    for(int i = 0; i <= nums.size(); i++){
      xor2 ^= i;
    }
    return xor1 ^ xor2;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    //display(nums);
    cout << distinct(nums)<< endl;
    return 0;
}
