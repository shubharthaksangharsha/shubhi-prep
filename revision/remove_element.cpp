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
int removeElement(vector<int>&nums, int val){
    int i = 0;
    for(int j = 0; j < nums.size(); j++){
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
int main()
{
    int n, val;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    cin >> val;
    cout << removeElement(nums, val) << endl;
    return 0;
}