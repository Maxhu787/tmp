#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(m);
  for(int &i : a) cin >> i;

  sort(a.begin(), a.end());

  int o = INT_MAX;
  for(int i = 0; i < m-n+1; i++) {
    o = min(o, a[i+n-1] - a[i]);
  }
  cout << o << "\n";
  return 0;
}

// 5 7 10 10 12 22 