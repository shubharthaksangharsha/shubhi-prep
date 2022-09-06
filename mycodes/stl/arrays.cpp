#include<iostream>
#include<vector>
#include<array>

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
    int basic[3] = {1, 2, 3};

        //datatype, size
    array<int, 4> a = {1, 2, 3, 4};

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Element at 2nd Index->" << a.at(2) << endl; //O(1)
    cout << "Empty or not->  " << a.empty() << endl; // O(1)
    cout << "First element-> " << a.front() << endl; // O(1)
    cout << "Last element ->" << a.back() << endl; //O(1)
}