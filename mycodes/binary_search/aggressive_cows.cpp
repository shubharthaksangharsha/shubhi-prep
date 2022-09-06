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
bool isPossibleSolution(const vector<int>&stalls, int const k, int const mid){
    int cowCount = 1;
    int lastPos = stalls[0];
    for(int i = 0; i < stalls.size(); i++){
        if(stalls[i] - lastPos >= mid){
            cowCount++;
            if (cowCount == k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(const vector<int>&stalls, int const k){
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;
    for(int i = 0; i < stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int e  = maxi;
    int ans = -1;
    int mid = s + (e - s ) / 2;
    while (s <= e){
        if (isPossibleSolution(stalls, k, mid)){
            ans = mid;
            s = mid + 1;
        } else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
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
    display(arr);
}