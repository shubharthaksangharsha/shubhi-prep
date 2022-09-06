#include<iostream>
#include<vector>
using namespace std;

void input(vector<int>&arr){
    for(auto &i: arr){
        cin >> i;
    }
}

void display(const vector<int>arr){
    for(auto const i: arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;
    //knowing size 
    vector<int>v2(5, 1); // makes v2 = {1, 1, 1, 1, 1}
    //making copy 
    vector<int>last(v2);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Before pop: ";
    for(auto i: v){
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "After pop: ";
    for(auto i: v){
        cout << i << " ";
    }
    cout << endl;
    //clear makes size 0 but capaicty as it is 
    //for example v = {1, 2, 3, 4}
    //v.clear() makes the size = 0 and capacity as 8 
    v.clear();
    cout << "After clearing: ";
    for(auto i: v){
        cout << i << " ";
    }
    cout << endl;
}