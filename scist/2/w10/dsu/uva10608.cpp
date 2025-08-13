#include <iostream>
#include <climits>
#include <numeric>
#include <algorithm>
using namespace std;

const int mxn = 3e4;
int link[mxn], s[mxn];

int find(int x) {
  return link[x] == x ? x : link[x] = find(link[x]);
}

void join(int a, int b) {
  a = find(a);
  b = find(b);
  if(a == b) return;
  if(s[a] < s[b]) swap(a, b);
  s[a] += s[b];
  link[b] = a;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    iota(link, link+n, 0);
    fill(s, s+n, 1);
    for(int i = 0; i < m; i++) {
      int bufa, bufb;
      cin >> bufa >> bufb;
      join(bufa, bufb);
    }
    int o = INT_MIN;
    for(int i = 0; i < n; i++) {
      o = max(o, s[i]);
    }
    cout << o << "\n";
  }
  return 0;
}