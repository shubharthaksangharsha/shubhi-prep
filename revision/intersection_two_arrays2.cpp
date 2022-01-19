#include<iostream>
#include<vector>
#include<unordered_map>
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
    unordered_map<int, int>f1, f2;
    vector<int>res;
    for(auto i: nums1){
        if(f1.find(i) == f1.end()){
            f1.insert(make_pair(i,1));
        } else{
            f1[i]++ ;
        }
    }
    for(auto i: nums2){
        if(f2.find(i) == f2.end()){
            f2.insert(make_pair(i,1));
        } else{
            f2[i]++ ;
        }
    }
    for(auto i : f1){
        if (f2.find(i.first) != f2.end()){
            int s = min(f1[i.first], f2[i.first]);
            while (s--){
                res.push_back(i.first);
            }
        }
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