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

int max_sum(vector<int>&nums){
    //O(N) Approach i.e  Kadane's Algorithm
    int max = nums[0];
    int sum = 0;
    int start = 0, end = 0, s = 0; 
    for(auto i : nums){
        sum+=i;
        if(sum > max){
            max = sum;
        }
        if (sum < 0){
            sum = 0;            
        }
    }
    //To get the starting and ending indeces of sub array which contains max value 
    max = nums[0], sum = 0; //reseting the values 
    for(int i = 0; i < nums.size(); i ++){
        sum += nums[i];
        if(sum > max){
            max = sum;
            start = s;
            end = i;
        }
        if(sum < 0){
            sum = 0;
            s = i + 1;
        }
    }

    cout << "starting index: " << start <<"\nending index: " << end << endl;
    return max;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);     
    input(nums);
    cout << max_sum(nums)<< endl;
    return 0;
}