#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main() {
  string s;
  stack<char> t;
  vector<char> v;  
  cin >> s;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == '<') {
      t.pop();
    } else {
      t.push(s[i]);
    }
  }
  
  while(!t.empty()) {
    v.push_back(t.top());
    t.pop();
  }
  for(int i = v.size()-1; i >= 0; i--) {
    cout << v[i] << "";
  }
  cout << "\n";
  return 0;
}