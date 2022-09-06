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

int peakIndexMountainArray(vector<int>&arr){
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e){
        if (arr[mid] < arr[mid+1]){
            s = mid + 1;
        } else{
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr(n);
    input(arr);
    display(arr);
    cout << peakIndexMountainArray(arr) << endl;
}