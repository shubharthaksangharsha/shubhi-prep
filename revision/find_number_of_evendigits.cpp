#include<iostream>
#include<vector>
#include<math.h>
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
int findNumbers(vector<int>&nums){
    //O(N log(N)) approach 
    int result = 0;
    for(int i = 0; i < nums.size(); i++){
        int temp = 0;
        temp = int(log10(nums[i])) + 1;
        if (temp % 2 == 0){
            result++;
        } 
        temp = 0;
    }
    return result;
    //O(N^2) Approach 
    // int result = 0;
    // for(int i = 0; i < nums.size(); i++){
    //     int temp = 0;
    //     while(nums[i] > 0){
    //         nums[i]/=10;
    //         temp++;            
    //     }
    //     if (temp % 2 == 0){
    //         result++;
    //     }
    // }
    // return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    cout << findNumbers(nums)<<endl;
 //   display(nums);
    return 0;
}