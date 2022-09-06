#include<bits/stdc++.h>
using namespace std;

void reverse_string(char name[], int n){
    for(int i = 0; i <= n; i++, n--){
        swap(name[i], name[n]);
    }
}
int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[100];
    cout << "Enter the string: "; 
    cin >> name;
    reverse_string(name, getLength(name) -1 );
    cout << "Reverse string: " << name << endl;
    return 0;

}