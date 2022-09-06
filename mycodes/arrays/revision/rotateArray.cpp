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

void rotateArray(vector<int>&arr, int const k){
    vector<int>temp(arr.size());
    for(int i = 0; i < arr.size(); i++){
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
    cout << "Enter the number of rotations: ";
    cin >> k;
    rotateArray(arr, k);
    display(arr);
}