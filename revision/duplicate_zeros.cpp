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
void duplicate(vector<int>&arr){
    int i , j;
    i = j = 0;
    while(i < arr.size()){
        if(arr[i] == 0){
            for(j = arr.size() -2 ; j >= i; j--){
                arr[j+1] = arr[j];
            }
            ++i;
        }
        ++i;
    }
  
  
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    duplicate(nums);
    display(nums);
    return 0;
}