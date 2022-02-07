#include<iostream>
using namespace std;
#include<stack>

int main()
{   
    stack<int>s;
    s.push(2);
    s.push(100);
    s.push(12);
    cout << s.size() << endl;
    s.pop();
    cout << s.size() << endl;
    s.pop();
    cout << s.size() << endl;
    s.pop();
    
    
    return 0;
}