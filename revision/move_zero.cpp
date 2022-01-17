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
void moveZeros(vector<int>&nums){
    //O(N) approach but SC: O(N) too 
    vector<int>ans;
    int zeros  = 0;
    for(int i = 0; i < nums.size(); i++){
        if (nums[i] == 0){
            zeros++;
        }
    }
    for(int i = 0; i < nums.size(); i++){
        if (nums[i] != 0){
            ans.push_back(nums[i]);
        }
    }
    for(int i = 0; i < zeros; i++){
        ans.push_back(0);
    }
    for(int i = 0; i < nums.size(); i++){
        nums[i] = ans[i];
    }
    //Second Approach O(N) in O(1) space:-
    int left = 0, right = 0;
    while (right < nums.size()){
        if (nums[right] == 0){
            right++;
        } else{
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp ;
            left++, right++;
        }
    }
    display(nums);
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    moveZeros(nums);
//    display(nums);
    return 0;
}