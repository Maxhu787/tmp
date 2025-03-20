#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int o=0;
  for(int i = 0; i < s.length(); i++) {
    switch((i) % 3) {
      case 0:
        if(s[i] != 'P') o++;
        break;
      case 1:
        if(s[i] != 'E') o++;
        break;
      case 2:
        if(s[i] != 'R') o++;
        break;
    }
  }
  cout << o << "\n";
  return 0;
}