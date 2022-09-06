#include<iostream>
#include<vector>
#include<algorithm>
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

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    cout << binary_search(v.begin(), v.end(), 0) << endl;
    
}