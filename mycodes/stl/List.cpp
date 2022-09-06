#include<iostream>
#include<list>

using namespace std;

void display(list<int> l){
    for(auto i: l){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    list<int>l(5, 100);
    list<int>l2(l);
    l.push_back(1);
    l.push_front(2);
    display(l);
    l.erase(l.begin());
    display(l);
    cout << "size of list: " << l.size() << endl;
    display(l2);
}