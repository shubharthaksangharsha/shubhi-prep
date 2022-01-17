#include<iostream>
#include<vector>
#include<math.h>
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

vector<int> sortedSquares(vector<int>&nums){
    //Nlog(N) approach using sort:-
    // for(int i = 0; i < nums.size() ; i++){
    //     nums[i] = nums[i] * nums[i];        
    // }
    // sort(nums.begin(), nums.end());
    // return nums;
    
    //O(N) approach and O(N)SC using 2 pointers:
    vector<int>ans(nums.begin(), nums.end());
    int n = nums.size() - 1 , l = 0, r = n;
    while(n >= 0){
        if ((nums[l] * nums[l]) > (nums[r] * nums[r])){
            ans[n] = nums[l] * nums[l];
            l++, n--;
        } 
        else{
            ans[n] = nums[r] * nums[r];
            r--, n--;    
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    display(nums);
    display(sortedSquares(nums));
    return 0;
}