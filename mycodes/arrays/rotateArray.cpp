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
void rotate(vector<int>&arr, int k){
    /*
    % n -> [0 se (n -1)]
    arr[(i + k) % n] = arr[k]
    */
    vector<int> temp(arr.size());
    for(int i =0; i < arr.size(); i++){
        temp[(i + k) % arr.size()] = arr[i];
    }
    arr = temp;
}
int main(){
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr(n);
    input(arr);
    cin >> k;
    rotate(arr, k);
    display(arr);
}