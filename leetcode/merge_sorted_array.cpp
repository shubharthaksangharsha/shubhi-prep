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

void Merge_Sorting(vector<int>&nums1, int m, vector<int>& nums2, int n){
  int size = m + n ;
  int i = 0, j = 0, k =0;
  vector<int>nums3;
  while(i < m){
    nums3.push_back(nums1[i]);
    i++;
  }
  i = 0;
  display(nums3);
  display(nums2);
  display(nums1);
  printf("i = %d, j = %d, k = %d\n", i, j , k);
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
  cout<<k<<endl;
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
  display(nums1);
}
int main(){
  int m,n;
  cin>>m;
  cin>>n;
  vector<int>nums1(m+n);
  for(int i = 0; i < m; i ++){
    cin>>nums1[i];
  }
  vector<int>nums2(n);
  input(nums2);
  Merge_Sorting(nums1, m, nums2, n );
  
  return 0;
 
  
  
}
