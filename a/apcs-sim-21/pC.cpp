#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

const int MOD = 1e9+7;
typedef long long ll;

ll mod(ll base, ll exp) {
  ll res = 1;
  base %= MOD;
  while (exp > 0) {
    if (exp & 1) res = (res * base) % MOD;
    base = (base * base) % MOD;
    exp >>= 1;
  }
  return res;
}

int main() {
  int n;
  string s;
  cin >> n >> s;

  vector<ll> dp(3, 0), ndp(3, 0);
  dp[0] = 1;

  ll starCount = 0;
  for (int i = 0; i < n; i++) {
    fill(ndp.begin(), ndp.end(), 0);
    vector<int> digits;
    if (s[i] == '*') {
      starCount++;
      digits.resize(10);
      iota(digits.begin(), digits.end(), 0);
    } else {
      digits = {s[i] - '0'};
    }
    for(int d : digits) {
      for (int st = 0; st < 3; st++) {
        if (dp[st] == 0) continue;
        int nxt;
        if (d == 0) {
          if (st == 0) nxt = 1;
          else if (st == 1) nxt = 2;
          else nxt = 2;
        } else if (d == 7) {
          if (st == 2) continue;
          else nxt = 0;
        } else {
          nxt = 0;
        }
        ndp[nxt] = (ndp[nxt] + dp[st]) % MOD;
      }
    }
    dp.swap(ndp);
  }
  ll safe = (dp[0] + dp[1] + dp[2]) % MOD;
  ll total = mod(10, starCount);

  ll ans = (total - safe + MOD) % MOD;
  cout << ans << "\n";
}
