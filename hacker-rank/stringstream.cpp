#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
  stringstream s1(str);
  vector<int> ivec;
  int st;
  char comma;
  while(s1 >> st){
    ivec.push_back(st);
    s1>>comma;
  }
  return ivec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
      cout << integers[i] << "\n";
    }
    return 0;
}
