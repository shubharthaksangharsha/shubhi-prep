#include<bits/stdc++.h>
using namespace std;

bool check_power(int  n){
    // int i = 0, ans = 0, j = 0;
    // while (i <= 30){
    //     if (ans == n){
    //         return true;
    //     }
    //     ans = pow(2, i++);
    // }
    // for(int i = 0; i <= 30; i++){
    //     if (ans == n){
    //         return true;
    //     }
    //     ans = pow(2, i);
    // }
    // return false;

    //Efficient solution 
    // int ans = 1;
    // for(int i = 0; i <= 30; i++){
    //     if (ans == n){
    //         return true;
    //     } 
    //     if(ans < INT_MAX /2)
    //     ans *= 2;
    // }
    // return false;
    //Bitwise solution 
    /*
    n = 5
    00000000101
    00000000010
              &
              1 = 0
             
    2 = 0000010
    */
   int ans = 0;
    while (n != 0){  
        if (n & 1 == 1){
            ans++;
        }
        if (ans > 1){
            return false;
        }
        n = n >> 1;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    cout << check_power(n) << endl;
    return 0;
}