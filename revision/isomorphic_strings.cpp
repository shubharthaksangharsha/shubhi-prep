#include<iostream>
#include<unordered_map>
using namespace std;
bool isIsomorphic(string &s, string &t){
    if(s.size() != t.size()){
        return false;
    }
    unordered_map<char,char>h1;
    unordered_map<char,bool>h2;
    for(int i = 0; i < s.size(); i++){
        if (h1.find(s[i]) != h1.end()){
            if (h1[s[i]] != t[i]){
                return false;
            }            
        }
        else if (h2.find(t[i]) != h2.end()){
            return false;
        }
        h1.insert(make_pair(s[i], t[i]));
        h2.insert(make_pair(t[i], true));
    }
    return true;
}
int main()
{   string s, t ;
    cin >> s >> t;
    cout << isIsomorphic(s,t)<<endl;
    return 0;
}