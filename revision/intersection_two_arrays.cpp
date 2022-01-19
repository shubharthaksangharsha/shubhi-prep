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
vector<int>Intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int>myhashset, intersection;
    for(auto i : nums1){
        myhashset.insert(i);
    }
    for(auto i: nums2){
        if (myhashset.find(i) != myhashset.end()){
            intersection.insert(i);
        }
    }
    vector<int>res;
    for(auto i : intersection){
        res.push_back(i);
    }
    return res;
}
int main()
{
    int m,n;
    cin >> m >> n;
    vector<int>nums1(m), nums2(n);
    input(nums1);
    input(nums2);
    display(Intersection(nums1, nums2));
    
    return 0;
}