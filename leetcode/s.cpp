class Solution {
public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int size = m + n ;
    int i = 0, j = 0, k =0;
    vector<int>nums3;
    while(i < m){
      nums3.push_back(nums1[i]);
      i++;
    }
    i = 0;
    while(i < m && j < n ){
      if(nums3[i] < nums2[j]){
	nums1[k] = nums3[i];
	i++;
	k++;
      }
      else{
	nums1[k] = nums2[j];
	j++;
	k++;
      }
    }
    if(i < m){
      while(i < m){
	nums1[k] = nums3[i];
	i++;
	k++;
      }
    }
    else{
      while(j < n){
	nums1[k] = nums2[j];
	j++;
	k++;
      }
    }
  }
};
 
