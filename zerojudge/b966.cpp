#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

#define pii pair<int, int>

int main() {
  int n;
  cin >> n;
  vector<pii> a;
  for(int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    a.push_back({l, 1});
    a.push_back({r, -1});
  }
  sort(a.begin(), a.end());

  int current = 0, o=0, prev=-1;
  for(pii i : a) {
    current += i.second;
    if(prev == -1 && current > 0) prev = i.first;
    if(current == 0 && prev != -1) {
      o += i.first - prev;
      prev = -1;
    }
  }
  cout << o << "\n";
  return 0;
}
/*

4
5 6
1 2
4 8
7 9

l, r;
a.push_back({l, 1})
a.push_back({r, -1})
0 1 2 3 4 5 6 7 8 9
0 1 0 0 1 2 2 2 1 0


4, 7 -> 4, 5, 6 -> (4, +1), (7, -1)
i, j -> (i, 1), (j, -1)
0 0 0 0 1 1 1  0 0 0
0 0 0 0 1 0 0 -1 0 0 
*/