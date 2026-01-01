#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int &i : a) cin >> i;
  sort(a.begin(), a.end());

  int best = INT_MAX, worst = INT_MIN;
  for(int i = 0; i < n; i++) {
    if(a[i] >= 60) {
      best = min(best, a[i]);
    } else {
      worst = max(worst, a[i]);
    }
  }

  for(int i : a) cout << i << " ";
  cout << "\n";
  cout << (worst != INT_MIN ? to_string(worst) : "best case") << "\n";
  cout << (best != INT_MAX ? to_string(best) : "worst case") << "\n";
  return 0;
}