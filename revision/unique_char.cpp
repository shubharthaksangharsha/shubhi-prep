#include<iostream>
#include<vector>
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void display(vector<int>nums){
    for(auto const i : nums){
        cout << i << ' ' ;
    }
    cout << endl;
}
using namespace std;
int uniqueChar(string &s){
    //using fixed 26 char array 
    // vector<int>count(26,0);
    // for(char i : s){
    //     count[int(i) - int('a')]+=1;
    // }
    // for(int i = 0; i < s.size(); i++){
    //     if (count[int(s[i]) - int('a')] == 1){
    //         return i;
    //     }
    // }
    // return -1;
    
    //using hashmap 
    unordered_map<char,int>myhashmap;
    for(char c : s){
        if (myhashmap.find(c) == myhashmap.end()){
            myhashmap.insert(make_pair(c, 1));
        } else{
            myhashmap[c]++;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(myhashmap.at(s[i]) == 1){
            return i;
        }
    }
    return -1;
}
int main()
{
    string s;
    cin >> s;
    cout << uniqueChar(s)<<endl;
    return 0;
}