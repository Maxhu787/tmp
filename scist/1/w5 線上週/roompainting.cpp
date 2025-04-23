#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for(int &i : a) cin >> i;
  for(int &i : b) cin >> i;

  sort(a.begin(), a.end());

  long long o = 0;
  for(int i = 0; i < m; i++) {
    auto it = lower_bound(a.begin(), a.end(), b[i]);
    o += *it - b[i];
  }
  cout << o << "\n";
  return 0;
}