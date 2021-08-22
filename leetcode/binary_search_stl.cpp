#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  vector<int> ivec= { 1, 2 ,3 , 4};
  auto start = ivec.begin();
  auto end = ivec.end();
  bool res = binary_search(start, end, 1);
  cout << res<<endl;

  return 0;
} 
