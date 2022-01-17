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
int searchInsert(vector<int>&nums, int target){
    int low = 0, high = nums.size() - 1;
    while (low <= high ){
        int mid = (high + low) / 2, guess = nums[mid];
        if (guess == target){
            return mid;
        }
        else if (guess >= target){
            high = mid -1 ;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    int n, target,t;
    cin >> t;
    while (t--){
        cin >> n;
        vector<int>nums(n);
        input(nums);
        cin >> target;
        cout << searchInsert(nums, target)<<endl;
    }
    return 0;
}