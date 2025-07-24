#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin >> s;

  string reversed_string=s;
  reverse(reversed_string.begin(), reversed_string.end());
  cout << (s == reversed_string ? "yes" : "no") << "\n";
  return 0;
}