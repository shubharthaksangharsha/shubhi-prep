#include<iostream>
using namespace std;

int main(){
    int n ; 
    cin >> n; // 5
    int i = 1;
    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << i - j++ + 1 << " ";
        }
        cout << endl;
        i++;
    }
    return 0;
    
}