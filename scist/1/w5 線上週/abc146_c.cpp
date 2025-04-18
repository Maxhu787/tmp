#include <iostream>
#include <string>
#include <climits>
using namespace std;
#define OK ios_base::sync_with_stdio(0);
#define LOL cin.tie(0); cout.tie(0);
#define ll long long

ll a, b, x;
const ll mxn = 1e9+1;
// 1e9+7
bool che(ll tg) {
  ll length = to_string(tg).length();
  return (a * tg + b * length) <= x;
}

int bin() {
  ll l = 0, r = mxn, mid;

  while(l != r) {
    mid = (l + r) >> 1;
    if(che(mid)) {
      l = mid + 1;
    } else {
      r = mid;
    }
  }

  return l-1;
}

signed main() {
  OK LOL;
  cin >> a >> b >> x;

  if((a + b) > x) {
    cout << "0" << "\n";
    return 0;
  }
  cout << bin() << "\n";

  return 0;
}