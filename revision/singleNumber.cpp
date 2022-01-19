#include<iostream>
#include<vector>
#include<unordered_set>
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
int singleNumber(vector<int>&nums){
    //Using hash set
    // int sum_hashset = 0, sum= 0;
    // unordered_set<int>myhashset;
    // for(auto i: nums){
    //     myhashset.insert(i);
    // }
    // for(auto i: myhashset){
    //     sum_hashset+=i;        
    // }
    // for(auto i: nums){
    //     sum+=i;
    // }
    // return 2 * sum_hashset - sum;

    //Using XOR
    int res = 0;
    for(auto i : nums){
        res ^= i;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    cout << singleNumber(nums)<<endl;
    return 0;
}