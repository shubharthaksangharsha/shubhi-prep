#include<iostream>
#include<queue>

using namespace std;

int main(){
    //Max heap 
    priority_queue<int>max_heap;

    //Min heap 
    priority_queue<int, vector<int>, greater<int>>min_heap;
    max_heap.push(1);
    max_heap.push(3);
    max_heap.push(5);
    max_heap.push(9);
    while (max_heap.size() != 0){
        cout << max_heap.top() << " ";
        max_heap.pop();
    }
    cout << endl;

    min_heap.push(1);
    min_heap.push(3);
    min_heap.push(5);
    min_heap.push(9);

    while(min_heap.size() != 0){
        cout << min_heap.top() << " ";
        min_heap.pop();
    }



}