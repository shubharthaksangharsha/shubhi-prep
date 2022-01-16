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
int findMaxConsecutiveOnes(vector<int>&nums){
    //nums = [1,1,0,1,1,1], output : 3
    //Linear Search O(N)
    int check , max;
    max = check = 0;
    for(int i = 0;i < nums.size(); i++){
        if (nums[i] == 1){
            check++;
            if (check >= max){
                max = check;
            }
        } else {
            check = 0;
        }
    }
    return max;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    cout << findMaxConsecutiveOnes(nums)<< endl;
    //display(nums);
    return 0;
}