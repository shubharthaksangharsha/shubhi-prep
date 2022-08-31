#include<iostream>
using namespace std;

int bitwiseCompliment(int n){
    int mask = 0, m = n;

    //Edge case
    if (m == 0){
        return 1;
    }
    while (m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    return (~n) & mask;
}
int main(){
    int n;
    cin >> n;
    cout << bitwiseCompliment(n) << endl;
}