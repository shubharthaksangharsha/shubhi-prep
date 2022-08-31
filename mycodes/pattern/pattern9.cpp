#include<iostream>
using namespace std;

int main(){
    int n ; 
    cin >> n; // 5
    int i = 1;
    // while (i <= n){
    //     int j = 1;
    //     int value = i;
    //     while (j <= i){
    //         cout << value++<< " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //Another method 
    /*
    i - j + 1 
    3 - 1 + 1 = 3 
    3 - 2 + 1 = 2 
    3 - 3 + 1 = 1
    */
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