#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&nums){
	/*
	add the user-defined values in the vector of ints
	input: vector<int>
	output: void
	*/
   for(auto &i : nums){
       cin >> i;
   }
}
void display(const vector<int>nums){
	/*
	display the vector of ints
	input: const vector<int> 
	output: void
	*/
    for(auto const i : nums){
        cout << i << ' ' ;
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
	sort the array ascendingly 
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

int main()
{
    int n;
    cin >> n; 
    vector<int>nums(n); 
    input(nums);
    display(nums);
    mergeSort(nums,0, nums.size() -1 );
	display(nums);
    return 0;
}