#include<iostream>
#include<vector>
using namespace std;
int even_digits(vector<int>nums){
  int count = 0, temp=count;
  for(int i = 0; i < nums.size(); i ++){
    while(nums[i] != 0){
      nums[i] = nums[i] / 10;
      ++count;
  }
    cout<<"Count : " << count << endl;
    if(count % 2 == 0){
      temp++;
    }
    count = 0;
  }

  return temp;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    
    for(auto &i : nums){
        cin>>i;
    }
    
    cout<< even_digits(nums)<<endl;
}
