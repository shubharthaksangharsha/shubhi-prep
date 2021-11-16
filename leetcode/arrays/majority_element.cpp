#include<iostream>
#include<vector>
#include<algorithm>
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
int majorityElement(vector<int>&nums){
    //Approach 1 : Brute Force O(n log n)
    // if(nums.size() == 1 || nums.size() == 2){
    //     return nums[0];
    // }
    // //Sort the array
    // sort(nums.begin(), nums.end());
    // int counter = 1;
    // for(int i = 0; i < nums.size(); i++){
    //     if(nums[i] == nums[i+1]){
    //         counter++;
    //     } else{
    //         if(counter > nums.size() /2 ){
    //             return nums[i];
    //         }
    //         counter = 1;
    //     }
    // }
    // return 0;
    //Approach 2: Moore's Voting Algorithm O(N):-
    int count = 0;
    int candidate = 0;
    for(int i : nums){
        if(count == 0){
            candidate = i;
        }
        if(i == candidate){
            count++;
        } else{
            count--;
        }
    }
    return candidate;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    //display(nums);
    cout << majorityElement(nums)<<endl;
    return 0;
}