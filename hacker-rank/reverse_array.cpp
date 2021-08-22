//https://www.hackerrank.com/challenges/arrays-ds/problem
#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &reverse){

  int swap;
  auto beg = reverse.begin(), end = reverse.end()-1;
  while(beg < end){
    swap = *beg;
    *beg = *end;
    *end = swap;
    beg++;
    end--;
    
  }
}
void display(vector<int> reverse){
    for(auto i : reverse){
        cout<< i << " " ;
    }
}

int main(){
    int n;
    cin>> n;
    vector<int> reverse(n);
    for(int i = 0; i < reverse.size(); i++){
      cin>> reverse[i];
    }

    reverseArray(reverse);
    display(reverse);
    
    return 0;
}
