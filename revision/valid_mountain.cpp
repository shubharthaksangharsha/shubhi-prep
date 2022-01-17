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

bool validMountainArray(vector<int>& nums) {
        int i = 0;
        //walk up
        while (i + 1 < nums.size() && nums[i] < nums[i+1]){
            i++;
        }
        // checking if peak is first or last :-
        if (i == 0 || i == nums.size() - 1){
            return false;
        }
        // walk down 
        while (i + 1 < nums.size() && nums[i] > nums[i+1]){
            i++;
        }
        return (i == nums.size() - 1);
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    display(nums);
    cout << validMountainArray(nums) << endl;
    return 0;
}