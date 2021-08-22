#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&ivec){
  for(auto &i : ivec){
    cin>>i;
  }
}

void display(vector<int> &ivec){
  for(auto const &i: ivec){
    cout << i << " " ;
  }
  cout<<endl;
}

vector<int> Merge_Sorting(vector<int>&nums1, int m, vector<int>& nums2, int n){
  int size = m + n; 
  vector<int>nums3(size);
  int i = 0, j = 0, k = 0;
  while(i < m && j < n){
    if(nums1[i] < nums2[j]){
      nums3[k] = nums1[i];
      i++;
      k++;
    }
    else{
      nums3[k] = nums2[j];
      j++;
      k++;
    }
  }
  if(i != m){
    while(i < m){
      nums3[k] = nums1[i];
      i++;
      k++;
    }
  }
  else{
    while(j < n){
      nums3[k] = nums2[j];
      j++;
      k++;
    }
  }
  
  display(nums3);

  return nums3;
}
int main(){
  int m,n;
  cin>>m;
  vector<int>nums1(m);
  input(nums1);
  cin>>n;
  vector<int>nums2(n);
  input(nums2);
  Merge_Sorting(nums1, m, nums2, n );
  
  return 0;
 
  
  
}
