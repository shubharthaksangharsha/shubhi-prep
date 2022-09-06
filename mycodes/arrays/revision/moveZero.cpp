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
void moveZero(vector<int>&arr){
    //Extra space
    // vector<int>temp;
    // int count = 0;
    // for(int i = 0; i < arr.size(); i++){
    //     if (arr[i] != 0){
    //         temp.push_back(arr[i]);
    //     } else{
    //         count++;
    //     }
    // }
    // for(int i = 0; i < count; i++){
    //     temp.push_back(0);
    // }
    // arr = temp;

    //2pointer approach 
    int nonZero = 0;
    for(int i = 0; i < arr.size(); i++){
        if (arr[i] != 0){
            swap(arr[i], arr[nonZero++]);
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
    moveZero(arr);
    display(arr);
}