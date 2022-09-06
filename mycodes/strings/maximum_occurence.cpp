#include<bits/stdc++.h>
using namespace std;

char getMaxOccurrence(string name){
    int arr[26] = {0};
    //Create an array of count of characters
    for(int i = 0; i < name.size(); i++){
        char ch = name[i];
        //lowercase
        int number = 0;
        if (ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        } else {
            //uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for(int i = 0; i < 26; i++){
        if (maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}
int main(){
    string name;
    cout << "Enter the string: "; 
    cin >> name;
    cout << getMaxOccurrence(name) << endl;
}