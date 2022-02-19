#include<iostream>
#include<vector>
using namespace std;
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
void display(const vector<int>nums){
    /*
	display the vector of int
	input: const vector<int> 
	output: void
	*/
    for(auto const i : nums){
        cout << i << ' ' ;
    }
    cout << endl;
}
int partition(vector<int>&nums, int s, int e){
    /*
    return the partition index for the recursive call
    input: vector of int, starting index: int, ending index: int
    output: partition index: int
    */
    int pivot = nums[e];
    int pIndex = s;
    
    for(int i  = s; i < e; i++){
        if(nums[i] < pivot){
            int temp = nums[i];
            nums[i] = nums[pIndex];
            nums[pIndex++] = temp;
        }
    }
    int temp = nums[e];
    nums[e] = nums[pIndex];
    nums[pIndex] = temp;

    return pIndex;
}
void quick_sort(vector<int>&nums, int s, int e){
    /*
    TC: O(nlogn), SC: (log n)
    sort the vector of int in ascending order
    input: vector of int, starting index s: int, ending index e: int
    output: void 
    */
    if (s < e){
        int p = partition(nums, s, e);
        quick_sort(nums, s, (p -1));
        quick_sort(nums, (p+1), e);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    input(nums);
    display(nums);
    quick_sort(nums,0, nums.size() -1 );
    display(nums);

    return 0;
}