#include<bits/stdc++.h>
using namespace std;

void input(int arr[], int const n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
 
}

void display(int const arr[], int const n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int arr[], int start, int end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}
void reverse(int arr[], int const n){
    int start = 0, end = n - 1;
    for(int start = 0, end = n - 1; start <= end; start++, end--){
        display(arr, n);
        cout << arr[start] << " " << arr[end] << " bsdke chal ja" << endl;
        swap(arr, start, end);
    }
}
int main(){
    int n; 
    cin >> n;
    int arr[10000];
    input(arr, n);
    reverse(arr, n);
    display(arr, n);
    return 0;
}