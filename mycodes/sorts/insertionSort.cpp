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
void insertionSort(vector<int>&arr){
    for(int i = 1; i < arr.size(); i++){
        int temp = arr[i];
        int j = i - 1; 
        for(; j >= 0; j--){
            if (arr[j] > temp){
                //shift 
                arr[j+1] = arr[j];
            } else{
                //break
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr(n);
    input(arr);
    insertionSort(arr);
    display(arr);
}