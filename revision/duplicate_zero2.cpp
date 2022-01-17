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
void duplicateZeros(vector<int>&nums){
    //TC: O(N^2), SC: 0(1):
    // int i = 0, j = 0;
    // while (i < nums.size()){
    //     if (nums[i] == 0){
    //         for(j = nums.size() - 2; j>=i; j--){
    //             nums[j+1] = nums[j];
    //         }
    //         i++;
    //     }
    //     i++;
    // }
    //TC:O(N), SC: O(N)
    // vector<int>ans;
    // for(int i = 0; i < nums.size(); i ++){
    //     if (nums[i] == 0){
    //         ans.push_back(0);
    //         ans.push_back(0);
    //     }
    //     else{
    //         ans.push_back(nums[i]);
    //     }
    // }
    // for(int i = 0; i < nums.size(); i++){
    //     nums[i] = ans[i];
    // }
    //TC : O(N), SC:O(1) using 2 pointer approach 
    int countZero = 0;
    for(int i = 0; i < nums.size(); i++){
        if (nums[i] == 0){
            countZero++;
        }
    }
    int newLen = nums.size() + countZero;
    int i = nums.size() -1, j = newLen -1, n = nums.size();
    while(j >= 0){
        if (j < n){
            nums[j] = nums[i];
        }
        j--;
        if (nums[i] == 0){
            if (j < n){
                nums[j] = nums[i];
            }
            j--;
        }
        i--;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    duplicateZeros(nums);
    display(nums);
    return 0;
}