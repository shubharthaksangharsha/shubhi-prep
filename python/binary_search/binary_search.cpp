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
int search_recursive(const vector<int>&ivec, int low, int high, int item){
  /*
    search element recursively and returns the index of searched element, if element not present returns -1
    input: vector of integer, low integer, high integer, element to be serached
    output: index of element if present else -1
  */
  if (high >= low){
    int mid = (high + low) / 2;
    int guess = ivec[mid];
			
    if (guess == item){
      return mid;
    } 
    if (guess > item){
      return search_recursive(ivec,low,mid-1,item);
    }
    return search_recursive(ivec, mid + 1, high, item);
  }
  else{
    return -1;
  }
}


void input(vector<int>&nums){
  for(auto &i : nums){
    cin >> i;
  }
}

void display(vector<int>&nums){
  for(auto const i : nums){
    cout << i << " ";
  }
  cout << endl;
}

int main(){
  int n;
  cin >> n; 
  vector<int>nums(n);
  input(nums);
  int item;
  cin >> item;
  cout << "Recursively: " << search_recursive(nums,nums[0], nums.size() -1, item) << endl;
  cout << "Iteratively: " << search_iterative(nums,item)<<endl;
  return 0; 
}