#include <iostream>
#include <string>
#include <map>
using namespace std;
#define OK ios_base::sync_with_stdio(0);
#define LOL cin.tie(0); cout.tie(0);

int main() {
  OK LOL
  string s;
  map<string, int> mp;
  while(cin >> s) {
    if(s == "define") {
      int value;
      string name;
      cin >> value >> name;
      mp[name] = value;
    } else {
      string a, b, op;
      cin >> a >> op >> b;
      if(mp.count(a) && mp.count(b)) {
        if(op == "<") {
          cout << (mp[a] < mp[b] ? "true" : "false") << "\n";
        } else if(op == ">") {
          cout << (mp[a] > mp[b] ? "true" : "false") << "\n";
        } else {
          cout << (mp[a] == mp[b] ? "true" : "false") << "\n";
        }
      } else {
        cout << "undefined\n";
      }
    }
  }
  return 0;
}