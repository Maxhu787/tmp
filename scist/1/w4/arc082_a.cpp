#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> v(1e5+2, 0);
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    a[i] = t;
    v[t]++;
  }
  int o = INT_MIN;
  for(int i = 1; i <= 1e5; i++) {
    int t = v[i-1] + v[i] + v[i+1];
    o = max(o, t);
  }
  cout << o << "\n";
  return 0;
}