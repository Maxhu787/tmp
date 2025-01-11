#include <iostream>
#include <string>
#include <map>
#include <stack>
using namespace std;

int main() {
  string s, odd="";
  cin >> s;
  map<char, int> o;
  stack<char> stk;
  for(int i = 0; i < s.length(); i++) {
    o[s[i]]++;
  }

  for(map<char, int>::iterator i = o.begin(); i != o.end(); ++i) {
    // cout << i->first << " " << i->second << "\n";
    if(i->second % 2 != 0) {
      odd += i->first;
    }
  }
  if(odd.size() > 1) {
    cout << "NO SOLUTION" << "\n";
    return 0;
  }
  for(map<char, int>::iterator i = o.begin(); i != o.end(); ++i) {
    for(int j = 0; j < i->second/2; j++) {
      cout << i->first;
    }
    stk.push(i->first);
  }
  cout << odd;
  while(!stk.empty()) {
    for(int i = 0; i < o[stk.top()]/2; i++) {
      cout << stk.top();
    }
    stk.pop();
  }
  cout << "\n";
  return 0;
}