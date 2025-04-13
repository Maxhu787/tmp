#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    
    for(int i = 0; i < n; i++) {
        if(a[i] >= a[n-1]) {
            cout << n - (i+1) << "\n";
            return;
        }
    }
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

