#include<iostream>
using namespace std;

long long int sqrtInteger(int const n){
    long long int ans = -1;
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) /2 ;
    while (s <= e){
        long long int square = mid * mid;
        if (square == n){
            return mid;
        } else if(square <n){
            ans = mid;
            s = mid + 1;
        } else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempSol){
    double factor = 1, ans = tempSol;
    for(int i = 0; i < precision; i++){
        factor /= 10;
        for(double j = ans; j*j < n; j = j + factor){
            ans = j;
        }
    }
    return ans; 
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int tempSol = sqrtInteger(n);
    cout << "Answer is " << morePrecision(n, 3, tempSol) << endl;


}