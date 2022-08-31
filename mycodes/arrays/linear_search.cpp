#include<bits/stdc++.h>
using namespace std;
void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}
bool linear_search(int arr[], int n, int element){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if (arr[i] == element){
            return true;
        }
    }
    return false;

}

int main(){
    int n;
    cin >> n;
    int arr[1000];
    input(arr, n);
    cout << "Element present: " << linear_search(arr, n, 5) << endl;
    return 0;
}