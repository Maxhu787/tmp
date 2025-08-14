#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

const int mxn = 1e6+2;
int link[mxn], s[mxn];

int find(int x) {
  return link[x] == x ? x : link[x] = find(link[x]);
}

void join(int a, int b) {
  a = find(a);
  b = find(b);
  if(a == b) return;
  if(s[a] < s[b]) swap(a, b);
  link[b] = a;
  s[a] += s[b];
}

int main() {
  cin.tie(0);ios::sync_with_stdio(0);
  int n, q;
  cin >> n >> q;
  iota(link, link+n, 0);
  fill(s, s+n, 1);

  while(q--) {
    char t;
    int bufa, bufb;
    cin >> t;
    if(t == 't') {
      cin >> bufa >> bufb;
      join(bufa, bufb);
    } else {
      cin >> bufa;
      int temp = find(bufa);
      cout << s[temp] << "\n";
    }
  }
  return 0;
}