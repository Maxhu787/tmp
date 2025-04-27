#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  int n, k, o=0;
  cin >> n >> k;

  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    o += abs(t - a[i]);
  }
  cout << ((k >= o && (k - o) % 2 == 0) ? "Yes" : "No") << "\n";

  return 0;
}