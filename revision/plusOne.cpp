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
vector<int> plusOne(vector<int>&nums){
    for(int i = nums.size() - 1; i >=0; i--){
        if (nums[i] < 9){
            nums[i]++;
            return nums;
        }
        nums[i] = 0;
    }
    nums.insert(nums.begin(), 1);
    return nums;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    display(nums);
    return 0;
}