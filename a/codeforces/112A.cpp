#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string a, b;
  getline(cin, a);
  getline(cin, b);

  for(int i = 0; i < a.length(); i++) {
    int x = tolower(a[i]), y = tolower(b[i]);
    if(x > y) {
      cout << 1 << "\n";
      return 0;
    } else if(y > x) {
      cout << -1 << "\n";
      return 0;
    }
  }
  cout << 0 << "\n";
  return 0;
}