#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
  if(a.second == b.second) return a.first < b.first;
  return a.second < b.second;
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }
  sort(a.begin(), a.end(), cmp);

  int prev = -1, o=0;
  for(int i = 0; i < n; i++) {
    if(prev <= a[i].first) {
      o++;
      prev = a[i].second;
    }
  }
  cout << o << "\n";
  return 0;
}

/*

1 2 3 4 5 6 7 8 9
    -----
        -------
      -----------

*/