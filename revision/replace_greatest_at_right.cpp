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
int maxFunc(vector<int>nums,int start, int end ){
    // int max_ind = start, max_val = nums[start];
    // for(int i = start; i < end; i++){
    //     if (nums[i] >= nums[max_ind]){
    //         max_ind = i;
    //         max_val = nums[i];
    //     }
    // }    
    // return max_val; 
}
vector<int> replaceElements(vector<int> & nums){
    // //Brute force O(N^2) approach using O(1) extra space
    // for(int i = 0; i < nums.size() - 1; i++){
    //     int max_val = maxFunc(nums, i+1, nums.size() -1);
    //     nums[i] = max_val;
    // }
    // nums[nums.size() - 1] = -1 ;
    // return nums;

    //O(N) Solution using O(1) space:-
    int temp = 0, mx = -1;
    for(int i = nums.size() - 1; i >= 0 ; i--){
        temp = nums[i];
        nums[i] = mx;
        if (temp >= mx){
            mx = temp;
        }
    } 
    return nums;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    replaceElements(nums);
    display(nums);
    return 0;
}