#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n, q;
  cin >> n >> q;

  vector<int> a(n);
  vector<int> b(n, 0);
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 1; i < n; i++) b[i] = a[i] - a[i-1];

  long long discomfort = 0;
  for(int i = 1; i < n; i++) discomfort += abs(b[i]);

  while(q--) {
    int l, r, v;
    cin >> l >> r >> v;
    l--;r--;

    if(l > 0) {
      discomfort -= abs(b[l]);
      b[l] += v;
      discomfort += abs(b[l]);
    }

    if(r+1 < n) {
      discomfort -= abs(b[r+1]);
      b[r+1] -= v;
      discomfort += abs(b[r+1]);
    }

    cout << discomfort << "\n";
  }
  return 0; 
}