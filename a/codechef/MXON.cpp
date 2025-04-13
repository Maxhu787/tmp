#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;

        while (k > 0) {
        bool change = false;
        string oo = s;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0' && s[i + 1] == '1') {
                oo[i] = '1';
                k--;
                change = true;
                if (k == 0) break;
            }
        }
        s = oo;
        if (!change) break;
    }

    int o = count(s.begin(), s.end(), '1');
    cout << o << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
