#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse_string(char name[], int n){
    for(int i = 0; i <= n; i++, n--){
        swap(name[i], name[n]);
    }
}
int main(){
    char a[100];
    cin >> a;
    cout << "Length: " << getLength(a) << endl;
    reverse_string(a, getLength(a) - 1);
    cout << a << endl;
    
}