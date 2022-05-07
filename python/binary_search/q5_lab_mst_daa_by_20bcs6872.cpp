//By Shubharthak
#include<iostream>
#include<vector>
using namespace std;

int search_iterative(const vector<int>&ivec, int item){
  /*
    search element iteratively and returns the index of searched element, if element not present returns -1
    input: vector of integers, integer element to be searched
    output: index of element if present else -1
  */
  int low = 0;
  int high = ivec.size() - 1;
  while(low <= high){
    int mid = (high + low) / 2;
    int guess = ivec[mid];
    if(guess == item){
      return mid;	
    } 
    if(guess > item){
      high = mid - 1;	
    } 
    else{
      low = mid + 1;	
    } 
  }
  return -1;
}

void input(vector<int>&nums){
  /*
    add the user-defined values in the vector of int
    input: vector<int>
    output: void
  */

  for(auto &i : nums){
    cin >> i;
  }
}

void display(const vector<int>&nums){
  /*
    display the vector of int
    input: const vector<int> 
    output: void
  */
  for(auto const i : nums){
    cout << i << " ";
  }
  cout << endl;
}
void merge(vector<int>&nums, int l, int m, int r){
  /*
    merge the two arrays from left index to mid and mid +1 index to right index 
    input: vector<int>, left index: int, mid index: int and right index: int 
    output: void
  */
  int i, j, k;
  i = k = l;
  j = m + 1;
  vector<int>temp(nums.size());
	
  while(i <= m && j <= r){
    if(nums[i] <= nums[j]){
      temp[k++] = nums[i++];
    } else{
      temp[k++] = nums[j++];			
    }		
  }
  while( i <= m){
    temp[k++] = nums[i++];
  }
  while (j <= r){
    temp[k++] = nums[j++];
  }
	
  for(int p = l; p <= r; p++){
    nums[p] = temp[p];
  }
	
}

void mergeSort(vector<int>&nums, int l, int r){
  /*
    sort the array in ascending order
    input: take the vector of ints, left index: int, right index: int
    output: void
  */
  if (l < r){
    int mid = (l + r) / 2;
    mergeSort(nums, l, mid);
    mergeSort(nums, mid+1, r);

    merge(nums,l, mid, r);
  }
}


//Driver Code
int main(){
  cout << "\t**LAB MST Program by Shubharthak, 20BCS6872**\n" << endl;
  vector<int>nums = {86000, 65000, 45000, 98990, 54670, 76560, 35980,78000, 65450, 88670, 49550, 74600, 82570, 63000, 99980};
  cout << "The list is given as: ";
  display(nums);
  int item = 35980;
  cout << "Item to be searched: " << item <<endl;
  cout << "Sorting the list using merge sort" << endl;
  mergeSort(nums, 0, nums.size() - 1);
  cout << "After sorting new list is as: ";
  display(nums);
  cout << "Applying Binary Search" << endl;
  cout << "Found " << item << " at " << search_iterative(nums, item)<< " index" << endl;
  return 0; 
}
