#include <iostream>
#include <algorithm>
using namespace std;

signed main() {
  cin.tie(0); cout.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m, x;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a+n);

  cin >> m;
  for(int i = 0; i < m; i++) {
    cin >> x;
    cout << upper_bound(a, a+n, x) - lower_bound(a, a+n, x) << "\n";
  }
  return 0;
}