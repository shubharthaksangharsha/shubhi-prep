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
        cout << i << ' ' ;
    }
    cout << endl;
}
int missingNumber(vector<int>&nums){
    //using sum method 
    int partial_sum = 0;
    for(auto i : nums){
        partial_sum += i;
    }
    return (nums.size() * (nums.size() + 1) / 2) - partial_sum;
    //using bit manipulation 
    int xor1 = 0, xor2 = 0;
    for(auto i: nums){
        xor1 ^= i;
    }
    for(int i = 0; i < nums.size(); i++){
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
    cout << missingNumber(nums) << endl;
    return 0;
}