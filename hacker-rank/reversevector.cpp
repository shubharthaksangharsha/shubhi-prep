#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

void input(vector<int> & ivec){
  for(auto &i : ivec){
    cin>> i;
  }
}
void reversefun(vector<int>& ivec, int start, int end){
  while(start < end){  
    int temp= ivec[start];
    ivec[start] = ivec[end];
    ivec[end] = temp; 
    start++;
    end--;
  }
     
}

void display(const vector<int> ivec){
  for(int i = 0; i <ivec.size(); i ++){
    cout<< ivec[i] << " " ;
  }
}
  
int main(){
  int n;
  cin>>n;
  vector<int> ivec(n);
  input(ivec);
  int start = 0;
  int end = ivec.size();
  reversefun(ivec,start,end-1);
  display(ivec);
  return 0;
}
    