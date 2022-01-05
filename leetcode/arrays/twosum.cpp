#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&ivec){
    for(auto &i : ivec){
        cin >> i;
    }
}
void display(vector<int>ivec){
    for(auto const i : ivec){
        cout << i << " ";
    }
    cout << endl;
}
 vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            //O(N^2) Approach i.e Brute Force
            for(int j = i+1; j < nums.size() ; j++){
                if(nums[j] == target - nums[i]){
                    vector<int>ivec;
                    ivec.push_back(i);
                    ivec.push_back(j);
                    return ivec;
                }
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
    int target;
    cin >> target;
    display(twoSum(nums, target));
   
    return 0;
}