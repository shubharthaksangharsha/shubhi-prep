#include<bits/stdc++.h>
using namespace std;

int get_Binary(int n){
    int answer = 0, i = 0;
    while (n != 0){
        cout << "N: " << n << endl;
        int bit = n & 1;
        answer += bit * pow(10, i++);
        n >>= 1;
        cout << "after N: " << n << endl;
    }
    return answer;
}
int main(){
    cout << get_Binary(5) << endl;
    return 0;
    
}