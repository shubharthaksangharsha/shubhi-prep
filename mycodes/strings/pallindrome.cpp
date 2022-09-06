#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if (ch >= 'a' && ch <= 'z'){
        return ch;
    } else{
        return (ch - 'A' + 'a');

    }
}
bool check_pallindrome(char name[], int n){
    for(int i = 0, j = n - 1; i < j; i++, j--){
        if (name[i] != name[j]){
            return false;
        }
    }
    return true;
}
bool check_pallindrome2(char name[], int n){
    for(int i = 0, j = n - 1; i < j; i++, j--){
        if (name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z' || name[i] >= '0' || name[i] <= '9'){
            cout << "CHecking string: " << name[i] << endl;
            if (name[i] >= '0' && name[i] <= '9'){
                if (name[i] != name[j]){
                    return false;
                }
            } else {
                if (toLowerCase(name[i]) != toLowerCase(name[j]) ){
                    return false;
                }
            }
        }
    }
    return true;
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
    int len = getLength(name); 
    cout << "Pallindrome: " << check_pallindrome2(name, getLength(name)) << endl;
    
}