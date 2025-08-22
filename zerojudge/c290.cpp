#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  int a=0, b=0;
  int t = false;
  for(int i = 0; i < s.size(); i++) {
    if(t) {
      a += int(s[i] - '0');
    } else {
      b += int(s[i] - '0');
    }
    t = !t;
  }
  cout << abs(a-b) << "\n";
  return 0;
}