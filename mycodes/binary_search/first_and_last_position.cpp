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
int firstOcc(const vector<int>&arr, int k){
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e){
        if (arr[mid] == k){
            ans = mid;
            e = mid - 1;
        } else if(k > arr[mid]){
            s = mid + 1;    
        } else {
            e = mid - 1;
        }
        mid = s + (e - s ) / 2;
    }
    return ans;
}

int lastOcc(const vector<int>&arr, int k){
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e){
        if (arr[mid] == k){
            ans = mid;
            s = mid + 1;
        } else if(k > arr[mid]){
            s = mid + 1;    
        } else {
            e = mid - 1;
        }
        mid = s + (e - s ) / 2;
    }
    return ans;
}

pair<int, int> firstAndLastOcc(const vector<int>&arr, int k){
    //Total occ = (last occ index - first occ index ) + 1
    pair<int, int>p;
    p.first = firstOcc(arr, k);
    p.second = lastOcc(arr, k);
    return p;
}
int main(){
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr(n);
    input(arr);
    cout << "Enter the key: ";
    cin >> k;
    cout << firstOcc(arr, k) << endl;
    cout << lastOcc(arr, k) << endl;
    
}