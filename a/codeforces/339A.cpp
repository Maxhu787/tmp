#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  vector<char> a;
  for(char i : s) {
    if(i != '+') {
      a.push_back(i);
    }
  }
  sort(a.begin(), a.end());

  bool first = true;
  for(char i : a) {
    if(first) first = false;
    else cout << "+";
    cout << i;
  }
  cout << "\n";
  return 0;
}