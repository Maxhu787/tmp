#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;
  if(max(a, b) <= 2 * min(a, b) && (a+b) % 3 == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// max(a, b) <= 2 * min(a, b)
// (a+b) % 3 == 0