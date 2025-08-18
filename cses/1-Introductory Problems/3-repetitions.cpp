#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int o=1, c=1;
  for(int i = 1; i < s.length(); i++) {
    if(s[i] == s[i-1]) {
      c += 1;
    } else {
      c = 1;
    }
    o=max(o, c);
  }
  cout << o << "\n";
  return 0;
}