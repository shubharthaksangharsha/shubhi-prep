#include<bits/stdc++.h>
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

const vector<int> intersection(const vector<int>&arr1, vector<int>arr2){
    vector<int>result;
    //Brute force : TLE
    /*
    arr1 = {1, 2, 3}
                  i
    arr2 = {3, 4}
               j
    // */
    // for(int i = 0; i < arr1.size(); i++ ){
    //     for(int j = 0; j < arr2.size(); j++){
    //         if (arr1[i] > arr2[j]){
    //             break;
    //         }
    //         if (arr2[j] == arr1[i]){
    //             result.push_back(arr2[j]);
    //             arr2[j] = INT_MIN;
    //             break;
    //         }
    //     }
    // }
    // return result;

    //Better solution 
    int i = 0, j = 0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] == arr2[j]){
            result.push_back(arr1[i]);
            i++; j++;
        } else if(arr1[i] < arr2[j]){
            i++;
        } else{
            j++;
        }
    }
    return result;
}
int main(){
    int m, n;
    cout << "Enter the size of the array: ";
    cin >> m >> n;
    cout << "Enter the elements: ";
    vector<int>arr1(m), arr2(n);
    input(arr1);
    input(arr2);
    vector<int>arr3 = intersection(arr1, arr2);
    display(arr3);
    
}