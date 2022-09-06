#include<iostream>
#include<map>

using namespace std;

void display(map<int, string> m){
    for(auto i: m){
        cout << i.first << " -> " << i.second << endl;
    }
}
int main(){
    map<int, string>m;
    m[1] = "shubhi";
    m[2] = "love";
    m[13] = "you";
    m.insert({5, "bheem"});
    display(m);
    cout << "Checking 13: " << m.count(13) << endl;
    cout << "Checking 12312: " << m.count(12312) << endl;
    m.erase(13);
    display(m);
}