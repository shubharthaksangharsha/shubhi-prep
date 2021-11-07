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
int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfit = 0;
    for(int i = 0; i < prices.size(); i++){
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    return maxProfit;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    //display(nums);
    cout << maxProfit(nums)<< endl;
    return 0;
}