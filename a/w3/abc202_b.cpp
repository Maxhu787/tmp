#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int check[58] = {0};
  check[48] = 0; check[49] = 1; check[54] = 9; check[56] = 8; check[57] = 6;
  vector<int> a(0);
  string s;
  getline(cin, s);

  for(int i = 0; i < s.length(); i++) {
    a.push_back(s[i]);
  }
  for(int i = a.size() - 1; i >= 0; i--) {
    cout << check[a[i]] << "";
  }
  return 0;
}

//  0  1  6  8  9
// 48 49 54 56 57