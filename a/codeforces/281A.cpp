#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  bool first = true;
  for(int i = 0; i < s.length(); i++) {
    int e = s[i];
    if(first) {
      if(e >= 65 && e <= 90) {
        cout << char(s[i]);
      } else {
        cout << char(s[i] - 32);
      }
      first = false;
    } else {
      cout << char(s[i]);
    }
  }
  cout << "\n";
  return 0;
}