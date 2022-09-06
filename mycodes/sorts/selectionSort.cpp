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
int min_index(vector<int>&arr, int index){
    int min_i = index; 
    for(int i = index; i < arr.size(); i++){
        if (arr[i] <= arr[min_i]){
            min_i = i;
        }
    }
    return min_i;
}
void swap(vector<int>&arr, int el1, int el2){
    int temp = arr[el1];
    arr[el1] = arr[el2];
    arr[el2] = temp;
}
void selectionSort(vector<int>&arr){
    //[4, 8, 1, 2, 3] 
    for(int i = 0; i < arr.size() -1 ; i++){
        int min_i = min_index(arr, i+1);
        swap(arr, i, min_i);
    }
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr(n);
    input(arr);
    selectionSort(arr);
    display(arr);
}