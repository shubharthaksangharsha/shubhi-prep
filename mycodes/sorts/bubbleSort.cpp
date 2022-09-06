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
void swap(vector<int>&arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void bubbleSort(vector<int>&arr){
    bool swapped = false;
    for(int i = 0; i < arr.size() - 1; i++){ //1 to n-1 rounds
        for(int j  = 0; j < arr.size() - i - 1; j++){ // comparisions 
            if (arr[j] > arr[j+1]){
                swapped = true;
                swap(arr, j, j+1);
            }
        }
        if (swapped == false){
            //already sorted
            break;
        }
    }
}
void make_vector(vector<int>&arr){
    for(int i = 0; i < arr.size(); i++){
        arr[i] = arr.size() - i;
    }
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    // cout << "Enter the elements: ";
    vector<int>arr(n);
    make_vector(arr);
    // input(arr);
    display(arr);
    bubbleSort(arr);
    cout << "After applying bubble sort: " << endl;
    display(arr);
}