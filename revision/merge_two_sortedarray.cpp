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
void merge(vector<int>&nums1, int m, vector<int>&nums2, int n){
    //Using O(N) auxillary space : Considering nums1.size() = m not m+n
    // vector<int>result(m + n);
    // int i = 0, j = 0, k = 0;
    // while (i != nums1.size() && j != nums2.size()){
    //     if (nums1[i] <= nums2[j]){
    //         result[k] = nums1[i];
    //         i++, k++;
    //     }
    //     else{
    //         result[k] = nums2[j];
    //         k++, j++;
    //     }
    // }
    // while (i != nums1.size()){
    //     result[k] = nums1[i];
    //     k++, i++;
    // }
    // while (j != nums2.size()){
    //     result[k] = nums2[j];
    //     k++, j++;
    // }
    int i = m -1, j = n -1 , k = nums1.size() -1 ;
    while (i >= 0 && j >= 0){
        if (nums1[i] >= nums2[j]){
            nums1[k] = nums1[i];
            k--, i --;
        } else{
            nums1[k] = nums2[j];
            k--, j--;
        }
    }
    while (i >= 0){
        nums1[k] = nums1[i];
        k--, i--;
    }
    while (j >= 0){
        nums1[k] = nums1[j];
        k--, j--;
    }
}
int main()
{   
    int m  = 3, n = 3;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}, nums2 = {2,5,6};
    merge(nums1, m, nums2, n);
    return 0;
}