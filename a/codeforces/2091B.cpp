#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  for(int &i : a) cin >> i;

  sort(a.begin(), a.end(), greater<int>());
  int o = 0, count=0;
  for(int i = 0; i < n; i++) {
    count++;
    if (count * a[i] >= x) {
      o++;
      count = 0;
    }
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

/*
if bigger then add to answer, 
else keep moving left, increase count by 1
if smaller go further back to front, increase *x by 1
*/