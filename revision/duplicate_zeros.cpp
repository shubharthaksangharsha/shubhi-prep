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
void duplicate(vector<int>&arr){
  //O(N^2) Approach
  
  // int i , j;
  // i = j = 0;
  // while(i < arr.size()){
  //     if(arr[i] == 0){
  //         for(j = arr.size() -2 ; j >= i; j--){
  //             arr[j+1] = arr[j];
  //         }
  //         ++i;
  //     }
  //     ++i;
  // }

  //O(N) Approach But O(N) Space Complexity
  // vector<int>temp;
  // for(auto i : arr){
  //   if (i == 0){
  //     temp.push_back(0);
  //     temp.push_back(0);
  //   } else{
  //     temp.push_back(i);
  //   }
  // }
  // for(int i = 0; i < arr.size(); i++){
  //   arr[i] = temp[i];
  // }

  //O(N) Approach (Best Approach)
  int i, start, end;
  end = arr.size()-1;
  for(start = 0; start < end; start++){
    if(arr[start] == 0){
      end--;
    }
  }
  for(i = arr.size() -1 ; i>=0 && end >=0; i--,end--){
    arr[i] = arr[end];
    if(end != start && arr[end] == 0){
      arr[i-1] = 0;
      i--;
    }    
  }
}
int main()
{
  int n;
  cin >> n;
  vector<int>nums(n);
  input(nums);
  duplicate(nums);
  display(nums);
  return 0;
}
