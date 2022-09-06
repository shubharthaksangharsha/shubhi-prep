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

void reverseArray(vector<int>&arr, int m){
    for(int start = m + 1, end = arr.size() - 1; start <= end; start++, end--){
        swap(arr[start], arr[end]);
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr(n);
    input(arr);
    reverseArray(arr, 2);
    display(arr);
}