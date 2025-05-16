#include <iostream>
#include <map>
using namespace std;

void solve() {
  int d, n;
  cin >> d >> n;
  int a[n];
  for(int &i : a) cin >> i;

  long long sum=0;
  map<long long, int> seen;
  seen[0]++;
  long long o=0;
  for(int i = 0; i < n; i++ ) {
    sum += a[i] % d;
    sum = sum % d;
    o += seen[sum];
    seen[sum]++;
  }
  cout << o << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}