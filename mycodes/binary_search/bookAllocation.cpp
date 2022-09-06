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
bool isPossibleSolution(const vector<int>&arr, int const n, int const m, int const mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++){
        if (pageSum + arr[i] <= mid){
            pageSum += arr[i];
        } else{
            studentCount++;
            if (studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int allocateBooks(const vector<int>&arr, int const n, int const m){
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int e = sum, ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e){
        if (isPossibleSolution(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        } else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    } 
    return ans;
}
int main(){
    int n, m;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr(n);
    input(arr);
    cout << "Enter the total number of students: ";
    cin >> m;
    cout << allocateBooks(arr, n, m) << endl;
}