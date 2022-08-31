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
void zero_or_one(vector<int> &arr){
    //2 pointer approach 
    int i = 0, j = arr.size() - 1;
    while (i < j){
        if (arr[i] == 0){
            i++;
        } 
        if (arr[j] == 1){
            j--;
        } 
        if (arr[i] == 1 && arr[j] == 0){
            swap(arr, i++, j--);
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
    zero_or_one(arr);
    display(arr);
}