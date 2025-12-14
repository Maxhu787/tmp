#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<string> o;
  sort(s.begin(), s.end());
  do {
    o.push_back(s);
  } while(next_permutation(s.begin(), s.end()));

  cout << o.size() << "\n";
  for(auto i : o) cout << i << "\n";
  return 0;
}