#include<bits/stdc++.h>
using namespace std;

int get_Decimal(int n){
    int answer = 0, i = 0;
    while (n != 0){
        int digit = n % 10;
        if (digit == 1){
            answer += pow(2, i);
                    
        }
        n /= 10;
        i++;
    }
    return answer;
}
int main(){
    int n;
    cin >> n;
    cout << get_Decimal(n) << endl;
    return 0;
    
}