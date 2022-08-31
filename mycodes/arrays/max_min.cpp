#include<iostream>
using namespace std; 

int min(int arr[], int size){
    int min = arr[0];
    for(int i = 0; i < 5; i++){
        if (arr[i] <= min){
            min = arr[i];
        }
    }
    return min;
}

int max(int arr[], int size){
    int max = 0;
    for(int i = 0; i < 5; i++){
        if (arr[i] >= max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout << max(arr, 5) << endl;
    cout << min(arr, 5)  << endl;
    return 0;
}