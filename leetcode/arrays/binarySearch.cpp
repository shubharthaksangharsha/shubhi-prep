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
int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() -1 ;
        int mid;
     while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[mid] < target)
          low = mid + 1;
        else
          high = mid - 1;
     }
        return -1;
}
    
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    //display(nums);
    int target;
    cin >> target;
    cout << search(nums, target)<< endl;
    return 0;
}