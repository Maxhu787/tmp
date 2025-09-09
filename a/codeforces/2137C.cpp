#include <iostream>
using namespace std;

#define OK cin.tie(0);cout.tie(0);
#define LOL ios::sync_with_stdio(0);
typedef long long ll;

int main() {
  OK LOL
  ll t;
  cin >> t;
  while(t--) {
    ll a, b, ans = -1;
    cin >> a >> b;

    if ((a + b) % 2 == 0) ans = a + b;

    if (b % 2 == 0) {
      ll ta = a * 2, tb = b / 2;
      if ((ta + tb) % 2 == 0) ans = max(ans, ta + tb);

      ll ta2 = a * (b/2), tb2 = b / (b/2);
      if ((ta2 + tb2) % 2 == 0) ans = max(ans, ta2 + tb2);
    }

    ll ta = a * b, tb = 1;
    if ((ta + tb) % 2 == 0) ans = max(ans, ta + tb);

    cout << ans << "\n";
  }
  return 0;
}

// For b even, the optimal divisors that maximize the sum are often 2, b/2, or b.
