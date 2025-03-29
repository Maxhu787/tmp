#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  int left = 0;
  bool space = true, first = true;
  while(left < s.length()) {
    if(s[left] == 'W' && s[left+1] == 'U' && s[left+2] == 'B') {
      left+=3;
      space = true;
    } else {
      if(space) {
        if(first) first = false;
        else cout << " ";
        space = false;
      }
      cout << s[left];
      left++;
    }
  }
  cout << "\n";
  return 0;
}