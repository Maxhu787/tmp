#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  vector<pair<int, int>> d;
  for(int i = 0; i < n; i++) {
    d.push_back({a[i].first, 1});
    d.push_back({a[i].second+1, -1});
  }
  sort(d.begin(), d.end());
  // for(auto i : d) cout << i.first << " " << i.second << "\n";
  int current = d[0].second, o=0;
  for(int i = 1; i < d.size(); i++) {
    o += (d[i].first - d[i-1].first) * (bool)current;
    current += d[i].second;
  }
  cout << o << "\n";
  return 0;
}

/*

3
1 3
2 5
7 8

[1, 2, 2,  1, 1,  0, 1, 1, 0]
[1, 1, 0, -1, 0, -1, 1, 0, -1]
(2, 4) => a[i]++, a[j+1]--;

*/