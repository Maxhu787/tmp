#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long o = -1e18, current = 0;
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    current = max((long long)t, current + t);
    // choose between extending or starting from itself
    // kadane
    o = max(o, current);
  }
  cout << o << "\n";
  return 0;
}