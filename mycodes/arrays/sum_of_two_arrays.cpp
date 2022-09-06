#include<iostream>
#include<algorithm>
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

vector<int> sumArrays(vector<int>&arr1, vector<int>&arr2){
    int i = arr1.size() - 1, j = arr2.size() - 1;
    int carry  = 0;
    vector<int>ans;
    while (i >= 0 && j >= 0){
        int val1 = arr1[i--];
        int val2 = arr2[j--];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }
    //first case  (left array is left)
    while (i >= 0){
        int sum = arr1[i--] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }
    //second case (second array is left)
    while (j >= 0){
        int sum = arr2[j--] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }

    //third case (carry is left)
    while(carry != 0){
        int sum = carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    vector<int>arr1 = {1, 2, 3, 4};
    vector<int>arr2 = {6};     
    vector<int>res = sumArrays(arr1, arr2); 
    display(res);
}