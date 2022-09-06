#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<int>q;
    q.push(2);
    q.push(5);
    cout << q.front() << endl;
    q.pop();
    cout << "Front Element: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;
}