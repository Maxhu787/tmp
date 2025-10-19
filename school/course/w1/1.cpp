#include <iostream>
using namespace std;

int main() {
  char n;
  bool o = false;
  while(cin.get(n)) {
    if(n >= 'A' && n <= 'Z') {
      cout << (char)(n + 32);
      o = true;
    } else if(n >= 'a' && n <= 'z') {
      cout << n;
      o = true;
    } else if(o) {
      cout << "\n";
      o = false;
    }
  }
  return 0;
}