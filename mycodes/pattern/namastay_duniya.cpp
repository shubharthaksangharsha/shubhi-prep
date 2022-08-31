#include<iostream>
using namespace std; 

int main(){
    char ch;
    cin >> ch;
    if (ch >= 65 && ch <= 96 ){
        cout << "Uppercase";
    } else if (ch >= 97 && ch <=123){
        cout << "Lowercase";
    } else{
        cout << "NUmber";
    }
    cout << endl;
}