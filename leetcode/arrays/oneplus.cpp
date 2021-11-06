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
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    display(nums);
    return 0;
}