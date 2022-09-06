#include<iostream>
#include<set>

using namespace std;

void display(set<int>s){
    for(auto i: s){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.insert(12); 
    display(s);
    set<int>::iterator it = s.begin();
    it++;
    // s.erase(s.begin());
    s.erase(it);
    display(s);
    cout << s.count(4) << endl;
    cout << s.count(5) << endl;
    set<int>::iterator itr = s.find(200);
    cout << *itr << endl;
}