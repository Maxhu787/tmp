#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

const int mxn = 1e6+5;
int n, tot;
int link[mxn], s[mxn];

int fin(int x) {
  return link[x] == x ? x : link[x] = fin(link[x]);
}

void join(int a, int b) {
  a = fin(a);
  b = fin(b);
  if(a == b) return;
  tot--;
  if (s[a] < s[b]) swap(a,b);
  s[a] += s[b];
  link[b] = a;
}

int main() {
  cin >> n;
  tot = n;
  iota(link, link+n, 0);
  fill(s, s+n, 1);

  return 0;
}