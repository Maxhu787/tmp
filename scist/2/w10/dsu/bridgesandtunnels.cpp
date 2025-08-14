#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <numeric>
using namespace std;

const int mxn = 2e5+5;
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
  int n, index=0;
  cin >> n;
  iota(link, link+mxn, 0);
  fill(s, s+mxn, 1);
  
  unordered_map<string, int> m;
  for(int i = 0; i < n; i++) {
    string bufa, bufb;
    cin >> bufa >> bufb;
    if(!m.count(bufa)) m[bufa] = index++;
    if(!m.count(bufb)) m[bufb] = index++;
    join(m[bufa], m[bufb]);
    int temp = find(m[bufb]);
    cout << s[temp] << "\n";
  }
}

/*
map buildling name to number, then join the numbers then check size with dsu
*/