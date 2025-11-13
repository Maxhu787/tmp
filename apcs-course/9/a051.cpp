#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

const int mxn = 800;
int n, m, tot;
int parent[mxn], s[mxn];

int fin(int x) {
  return parent[x] == x ? x : parent[x] = fin(parent[x]);
}

void join(int a, int b) {
  a = fin(a);
  b = fin(b);
  if(a == b) return;
  tot--;
  if(s[a] < s[b]) swap(a, b);
  s[a] += s[b];
  parent[b] = a;
}

int main() {
  cin >> n >> m;
  tot = n;
  iota(parent, parent+n, 0);
  fill(s, s+n, 1);
  int a, b;
  for(int i = 0; i < m; i++) {
    cin >> a >> b;
    a--;b--;
    join(a, b);
  }
  cin >> a >> b;
  a--;b--;
  cout << (fin(a) == fin(b) ? "Yes" : "No") << "\n";
  return 0;
}