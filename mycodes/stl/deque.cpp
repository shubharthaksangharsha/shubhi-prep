#include<iostream>
#include<deque>

using namespace std;

void display(const deque<int>d){
    for(auto i : d){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    display(d);
    //d.pop_back();
    // d.pop_front();
    // display(d);
    //cout << "Print first index element-> "<< d.at(1) << endl;
    // cout << "front element: " << d.front() << endl;
    // cout << "back element: " << d.back() << endl;
    // cout << "Check empty: " << d.empty() << endl;
    cout << "Before erase: " << d.size() << endl;
    cout << "Before earase Max size: " << d.max_size() << endl;
    d.erase(d.begin(), d.end());
    cout << "After erase: " << d.size() << endl;
    cout << "After Max size: " << d.max_size() << endl;



}