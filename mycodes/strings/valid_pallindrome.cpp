#include<bits/stdc++.h>
using namespace std;

bool valid(char ch){
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return true;
    }
    return false;
}
char toLowerCase(char ch){
    if (ch >= 'A' && ch <= 'Z'){
        return (ch - 'A' + 'a');
    }
    return ch;
}
bool Check_pallindrome(string temp){
    for(int i = 0, j = temp.length() - 1; i <= j; i++, j--){
        if(temp[i] != temp[j]){
            return false;
        }
    }
    return true;
}
bool check_pallindrome(string name){
    //remove unneccessary characters
    string temp;
    for(int i = 0; i < name.length(); i++){
        if (valid(name[i])){
            temp.push_back(name[i]);
        }
    }
        cout << "Temp: " << temp << endl;

    //convert to lowercase
    for(int i = 0; i < temp.length(); i++){
        temp[i] = toLowerCase(temp[i]);
    }
    cout << "Temp lowercase: " << temp << endl;
    return Check_pallindrome(temp);
}
int main(){
    string name;
    cout << "Enter the string: ";
    getline(cin, name);
    cout << name << endl;
    cout << "Valid pallindrome: " << endl << check_pallindrome(name) << endl;
}