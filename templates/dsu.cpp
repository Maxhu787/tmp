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

//沒機會用到
// bool same(int a, int b) {
//   return fin(a) == fin(b);
// }

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
  // for (int i = 0; i < n; i++) link[i] = i;
  // for (int i = 0; i < n; i++) s[i] = 1;

  return 0;
}