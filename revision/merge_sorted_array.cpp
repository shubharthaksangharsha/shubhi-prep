#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&nums, int m){
   for(int i = 0; i < m ; i++){
       cin>> nums[i];
   }
}
void display(vector<int>nums){
    for(auto const i : nums){
        cout << i << ' ' ;
    }
    cout << endl;
}
void merge(vector<int>&nums1, int m , vector<int>&nums2, int n){
        //Method 1 : using O(m+n) Time Complexity:-    
        m--, n--;
        int index = nums1.size() - 1 ;
        while(index >= 0){        
            if(m < 0 ){
                nums1[index] = nums2[n--];
            } else if(n < 0 ){
                nums1[index] = nums1[m--];
            } else{
                if(nums1[m] > nums2[n]){
                    nums1[index] = nums1[m--];
                } else{
                    nums1[index] = nums2[n--];
                }
            }
            index--;
        }
}
int main()
{
    int m, n;
    cin >> m >> n ;
    vector<int>nums1(m + n), nums2(n);
    input(nums1, m);
    input(nums2, n);
    display(nums1);
    display(nums2);
    merge(nums1,m,nums2,n);
    display(nums1);
    return 0;
}