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

bool check_array_sorted(vector<int>&arr){
    int count = 0;
    for(int i = 1; i < arr.size(); i++){
        if (arr[i - 1] > arr[i]){
            count++;
        }
    }
    if (arr[arr.size() - 1] > arr[0]){
        count++;
    }
    return count <= 1;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr(n);
    input(arr);
    display(arr);
    cout << "Checking array rotated and sorted: " << check_array_sorted(arr) << endl;
}