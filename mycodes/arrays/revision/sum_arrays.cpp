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


vector<int> sumArrays(vector<int>&arr1, vector<int>&arr2){
    int i = arr1.size() - 1, j = arr2.size() - 1;
    int carry = 0;
    vector<int>ans;
    while (i >= 0 && j >= 0){
        int sum = arr1[i--] + arr2[j--] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }
    while (i >= 0){
        int sum = arr1[i--] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }
    while (j >= 0){
        int sum = arr2[j--] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }
    while (carry != 0){
        int sum = carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    int n;
    cout << "Enter the size of the first array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr1(n);
    input(arr1);
    int m; 
    cout << "Enter the size of second array: ";
    cin >> m;
    vector<int>arr2(m);
    input(arr2);
    vector<int>result = sumArrays(arr1, arr2);
    display(result);
}