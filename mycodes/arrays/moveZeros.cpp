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

void moveZeros(vector<int>&arr){
    //[0, 1, 0, 3, 12]
    //Using extra space 
    // vector<int>ans;
    // int count = 0;
    // for(int i = 0; i < arr.size(); i++){
    //     if (arr[i] != 0){
    //         ans.push_back(arr[i]);
    //     } else{
    //         count++;
    //     }
    // }
    // for(int i = 0; i < count; i++){
    //     ans.push_back(0);
    // }
    // for(int i = 0; i < arr.size(); i++){
    //     arr[i] = ans[i];
    // }
    
    //Using 2 pointer 
    //[0, 1, 0, 3, 12]
    //shift all non zero values to left 
    int nonZero = 0, j = 0;
    while (j < arr.size()){
        if (arr[j] == 0){
            j++; 
        } else{
            swap(arr[nonZero++], arr[j++]);
        }
    }

}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr(n);
    input(arr);
    moveZeros(arr);
    display(arr);
}