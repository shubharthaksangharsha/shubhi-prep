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
vector<int> sortByParity(vector<int>&nums){
    //O(N) time but Space O(N)
    // vector<int>answer,odd;
    // for(auto i : nums){
    //     if (i % 2 == 0){
    //         answer.push_back(i);
    //     } else{
    //         odd.push_back(i);
    //     }
    // }
    // for(auto i: odd){
    //     answer.push_back(i);
    // }
    // return answer;
    //O(N) Approach and O(1) space :-
    for(int i = 0, j = 0; i < nums.size(); i++){
        if (nums[i] % 2 != 0){
            continue;
        } else{
        int temp = nums[j];
        nums[j++] = nums[i];
        nums[i] = temp;
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
    sortByParity(nums);
    display(nums);
    return 0;
}