#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  
  int o = 0;
  stack<int> t;
  for(char i : s) {
    if(i == '(') {
      t.push(1);
      if(o != -1) o++;
    } else {
      if(!t.empty()) {
        t.pop();
      } else {
        o = -1;
      }
    }
  }
  if(!t.empty()) {
    o = -1;
  }
  cout << (o != -1 ? o : 0) << "\n";
  return 0;
}