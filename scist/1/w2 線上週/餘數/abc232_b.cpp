#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  if (s.length() != t.length()) {
    cout << "No\n";
    return 0;
  }
  int diff = (s[0] - t[0] + 26) % 26;
  for(int i = 1; i < s.length(); i++) {
    if(((s[i] - t[i] + 26) % 26) != diff) {
      cout << "No" << "\n";
      return 0;
    }
  }
  cout << "Yes" << "\n";
  return 0;
}