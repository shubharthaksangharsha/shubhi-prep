#include<iostream>
#include<stack>

using namespace std;

void display(stack<string>s){
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main(){
    stack<string>s;
    s.push("shubhi");
    s.push("love");
    s.push("i");
    display(s);
    cout << s.size() << endl;
}