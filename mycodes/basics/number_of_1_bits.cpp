#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n) {
        int count = 0;
        while (n != 0){
            if (n & 1){
                count++;
            }
            n >>= 1;
        }
        return count;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << "Answer: " << hammingWeight(n) << endl;
    }
}
