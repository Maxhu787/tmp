#include <iostream>
#include <set>
using namespace std;

const int mxn = 700 + 26;
int link[mxn];

int find(int x) {
  return link[x] == x ? x : link[x] = find(link[x]);
}

void join(int a, int b) {
  a = find(a);
  b = find(b);
  if(a == b) return;
  link[b] = a;
}

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  for(int i = 0; i < m+k; i++) {
    link[i] = i;
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      char c;
      cin >> c;
      join(j, m+c-'A');
    }
  }
  set<int> s;
  for(int i = 0; i < m; i++) {
    int temp = find(link[i]);
    s.insert(temp);
  }
  cout << s.size() << "\n";
  return 0;
}

/*

keep track of column, class only, no need for row

link current column with current class;

column stored from 0~m-1
class stored from m-1 ~ m-1 + k

*/