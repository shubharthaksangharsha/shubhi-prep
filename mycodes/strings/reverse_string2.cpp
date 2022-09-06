#include<bits/stdc++.h>
using namespace std;
string reverse(string str){
    for(int i = 0, j = str.size() - 1; i <= j; i++, j-- ){
        swap(str[i], str[j]);
    }
    return str;
}
string reverse_string_two(string name){
    vector<string>store_string;
    string temp;
    for(int i = 0; i < name.size(); i++){
        if (name[i] == ' '){
            store_string.push_back(temp);
            temp = "";
        } else{
            temp.push_back(name[i]);
        }
    }
    
    store_string.push_back(temp);
    string ans;
    for(int i = 0; i < store_string.size(); i++){
        string get_reverse = reverse(store_string[i]);
        ans += get_reverse;
        ans.push_back(' ');
    }
    ans.erase(ans.size() - 1);
    return ans;
}

int main(){
    string name;
    cout << "Enter the string: "; 
    getline(cin, name);
    cout << reverse_string_two(name) << endl;
}