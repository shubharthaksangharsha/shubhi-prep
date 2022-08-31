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
void swap_number(vector<int>&arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void alternate_swap(vector<int>&arr){
    // for(int i = 0; i < arr.size(); i+= 2){
    //     if (arr.size() % 2 == 0){
    //         swap_number(arr, i, i+1);
    //     } else{
    //         if (i == arr.size() - 1){
    //             cout << arr.size()<< endl;
    //             continue;
    //         } else{
    //            swap_number(arr, i, i+1);
    //         }
    //     }
    // }

    //Easy method 
    for(int i = 0; i < arr.size(); i += 2){
        if (i +1 < arr.size()){
            swap_number(arr, i, i+1);
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
    alternate_swap(arr);
    display(arr);
}