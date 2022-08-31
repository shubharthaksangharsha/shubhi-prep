#include<iostream>
using namespace std;

int main(){
    int n ; 
    cin >> n; // 5
    int i = 1;
    while (i++ <= n){
        int j = 1;
        char c = 65;
        while (j++ <= n){
            
            cout << c++ << " ";
        }
        cout << endl;
    }
    return 0;
    
}