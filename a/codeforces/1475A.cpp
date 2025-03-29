#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    if (n & (n - 1)) cout << "YES\n"; 
    else cout << "NO\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
