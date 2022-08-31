#include<iostream>
#include<vector>
using namespace std;

void input(vector<int>&arr){
    for(auto &i: arr){
        cin >> i;
    }
}

void display(const vector<int>arr){
    for(auto const i: arr){
        cout << i << " ";
    }
    cout << endl;
}

int duplicate_array(vector<int>&arr){
    //example
    /*
    n = 5
    arr = [1, 2, 3, 4, 3] 
    */
   int ans = 0;
   for(int i = 0; i < arr.size(); i++){
       ans ^= arr[i];
   }
   for(int i = 1; i < arr.size(); i++){
       ans ^= i;
   }
   return ans;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr(n);
    input(arr);
    cout << duplicate_array(arr)<< endl;
}