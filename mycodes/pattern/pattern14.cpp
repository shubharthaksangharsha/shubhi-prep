#include<iostream>
using namespace std;

int main(){
    int n ; 
    cin >> n; // 5
    int i = 1;
    int j = 1;
    while (i++ <= n){
        while (j++ <= n){
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
    
}