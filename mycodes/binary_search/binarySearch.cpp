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

int binarySearch(const vector<int>&arr, int const key){
    //Iterative:-
    int start = 0, end = arr.size() - 1; 
    while (start <= end){
        
        int mid = (start + end )/ 2;
        int guess = arr[mid];
        if (guess == key){
            return mid;
        } 
        if(guess < key){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;

}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int>arr(n);
    input(arr);
    cout << binarySearch(arr, 2) << endl;
}