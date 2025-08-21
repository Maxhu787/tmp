#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  int ans = INT_MAX;
  for (int p = 1; p <= 100; p++) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += (a[i] - p) * (a[i] - p);
    }
    ans = min(ans, sum);
  }

  cout << ans << "\n";
  return 0;
}
