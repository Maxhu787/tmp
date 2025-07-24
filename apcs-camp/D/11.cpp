#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'a') {
      cout << 'z';
    } else {
      cout << char(s[i] - 1);
    }
  }
  cout << "\n";
  return 0;
}