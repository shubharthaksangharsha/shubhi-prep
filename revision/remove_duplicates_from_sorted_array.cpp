#include<iostream>
#include<vector>
#include<set>
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
int removeDuplicates(vector<int>&nums){
    //Approach 1 : O(N) and SC: O(1)
    if(nums.size() == 0){
        return 0;
    }
    int i = 1;
    for(int j = 1; j < nums.size(); j++){
        if (nums[j] != nums[j-1]){
            nums[i++] = nums[j];
        }
    }
    return i;
    //Aproach 2: O(N) and SC: O(1)
    int  i = 0;
    for(int j = 0; j < nums.size(); j++){
        if (nums[j] != nums[i]){
            nums[++i] = nums[j];
        }
    }
    return i+1;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
 //   display(nums);
    return 0;
}