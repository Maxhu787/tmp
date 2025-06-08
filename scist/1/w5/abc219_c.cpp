#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int d[26];
bool cmp(string a, string b) {
  int len = min(a.size(), b.size());
  for(int i = 0; i < len; i++) {
    if(a[i] != b[i]) {
      return d[a[i] - 'a'] < d[b[i] - 'a'];
    }
  }
  return a.size() < b.size();
}

int main() {
  string s;
  cin >> s;

  for(int i = 0; i < s.size(); i++) {
    d[s[i] - 'a'] = i;
  }
  int n;
  cin >> n;
  vector<string> a(n);
  for(string &i : a) cin >> i;

  sort(a.begin(), a.end(), cmp);

  for(string i : a) cout << i << "\n";
  return 0;
}