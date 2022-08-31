#include<bits/stdc++.h>
using namespace std;
void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}
int sum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;

}

int main(){
    int n;
    cin >> n;
    int arr[1000];
    input(arr, n);
    cout << "Sum of the array: " << sum(arr, n) << endl;
    return 0;
}