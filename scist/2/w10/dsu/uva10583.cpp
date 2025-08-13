#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

const int mxn = 5e4;
int link[mxn], s[mxn];
int bufa, bufb;

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
  int o = 1;
  while(cin >> bufa >> bufb && bufa != 0 && bufb != 0) {
    for(int i = 0; i < bufa; i++) {
      link[i] = i;
      s[i] = 1;
    }
    for(int i = 0; i < bufb; i++) {
      int a, b;
      cin >> a >> b;
      join(a, b);
    }
    set<int> s;
    for(int i = 0; i < bufa; i++) {
      int x = find(i);
      s.insert(x);
    }
    cout << "Case " << o << ": " << s.size() << "\n";
    o++;
  }
}