#include <iostream>
#include <algorithm>
using namespace std;

const int mxn = 1e6+5;
int n, q, bufa, bufb;
int link[mxn], s[mxn];

int find(int x) {
  return link[x] == x ? x : link[x] = find(link[x]);
}

bool same(int a, int b) {
  return find(a) == find(b);
}

void join(int a, int b) {
  a = find(a);
  b = find(b);
  if(a == b) return;
  if (s[a] < s[b]) swap(a,b);
  s[a] += s[b];
  link[b] = a;
}
int main() {
  cin.tie(0);cout.tie(0);
  ios::sync_with_stdio(0);

  cin >> n >> q;
  for (int i = 0; i < n; i++) link[i] = i;
  for (int i = 0; i < n; i++) s[i] = 1;

  while(q--) {
    char c;
    cin >> c;
    cin >> bufa >> bufb;
    // bufa--;bufb--;

    if(c == '?') {
      cout << (same(bufa, bufb) ? "yes" : "no") << "\n";
    } else {
      join(bufa, bufb);
    }
  }
  return 0;
}