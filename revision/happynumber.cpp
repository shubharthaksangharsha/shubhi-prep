#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
void input(vector<int>&nums){
   for(auto &i : nums){
       cin >> i;
   }
}
void display(std::unordered_set<int> const &s)
{
    for(auto i = s.begin(); i != s.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
}
 
bool happyNumber(int n){

    /*
    Complexity: O(Log(N)) and SC: O(log(n))
    Input: n = 19
    Output: true
    Explanation:
    1^2 + 9^2 = 82
    8^2 + 2^2 = 68
    6^2 + 8^2 = 100
    1^2 + 0^2 + 0^2 = 1*/
    int temp = n , sum= 0, digit = 0;
    unordered_set<int>myset;
    while(1){
        while (n > 0){  
            digit = n%10;
            sum += digit * digit;
            n/=10;
        }
        if (sum == 1){
            return true;
        }
        if (myset.find(sum) == myset.end()){
            myset.insert(sum);
            n = sum;
            sum = 0;
        } else{
            return false;
        }
    }
    return false;
}
int main()
{   
    
    int n;
    cin >> n;
    //vector<int>nums(n);
    //input(nums);
    cout << happyNumber(n) << endl;
    return 0;
}