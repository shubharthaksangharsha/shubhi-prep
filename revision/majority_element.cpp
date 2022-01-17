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
int majorityElement(vector<int>&nums){
    //Moores Voting Algo
    int candidate = 0, count = 0;
    for(auto i : nums){
        if (count == 0){
            candidate = i;
        }
        if (i == candidate){
            count++;
        }
        else{
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
    cout << majorityElement(nums) << endl;
    return 0;
}