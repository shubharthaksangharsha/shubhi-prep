#include<iostream>
#include<vector>
using namespace std;
int max(vector<int>ivec){
  int count = 0, temp=count;
  for(int i = 0; i < ivec.size(); i ++){
    if(ivec[i] == 0){
      count = 0;
    }
    else{
      count++;
      if(count>=temp){
	temp = count; // temp = 2 
      }
    }
  }
  return temp;
}
int main(){
    int n;
    cin>>n;
    vector<int>ivec(n);
    
    for(auto &i : ivec){
        cin>>i;
    }
    
    cout<< max(ivec)<<endl;
}
