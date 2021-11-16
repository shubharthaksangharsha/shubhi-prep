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
int pivotIndex(vector<int>&nums){
    int leftsum = 0;
    int sum =0;
    for(auto i : nums){
        sum+=i;
    }
    cout <<"sum : " << sum << endl;
    int rightsum = sum;
    for(int i = 0; i < nums.size(); i++){
        rightsum -= nums[i];
        if(leftsum == rightsum){
            return i;
        }
        leftsum += nums[i];
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    //display(nums);
    cout << "Pivot Index : "<< pivotIndex(nums) << endl;
    return 0;
}