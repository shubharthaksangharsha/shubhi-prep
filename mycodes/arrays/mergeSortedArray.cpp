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

vector<int> mergeSortedArray(vector<int>&arr1, vector<int>&arr2, int m, int n){
    int i = m -1 , j = n - 1;
    int k = (m + n) - 1;
    vector<int>ans(m + n);
    while (i >= 0 && j >= 0){
        if (arr1[i] >= arr2[j]){
            ans[k--] = arr1[i--];
        } else{
            ans[k--] = arr2[j--];
        }
    }
    while (i >= 0){
        ans[k--] = arr1[i--];
    }
    while (j >= 0){
        ans[k--] = arr2[j--];
    }
    return ans;
}
int main(){
    int m, n;
    cout << "Enter the size of the first array: ";
    cin >> m;
    cout << "Enter the size of the second array: ";
    cin >> n;
    cout << "Enter the elements of first array: ";
    vector<int>arr1(m), arr2(n);
    input(arr1);
    cout << "Enter the elements of second array: ";
    input(arr2);
    display(arr1);
    display(arr2);
    vector<int>ans = mergeSortedArray(arr1, arr2, m, n);
    display(ans);
}