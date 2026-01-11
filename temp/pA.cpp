#include <iostream>
using namespace std;

#define OK cin.tie(0);
#define LOL ios::sync_with_stdio(0);
typedef long long ll;
ll t, a, b, ca, cb, fa;
const ll mxn = 1e9;

bool che(ll x) {
  bool o = true;
  for(ll i = 0; i <= x; i++) {
    ll curr = ((b+i)/cb*ca) + (x-i) + a;
    // cout << (curr < fa ? 0 : 1) << " ";
    if(curr < fa) o = false;
  }
  return o;
}

int main() {
  cin >> t;

  while(t--) {
    cin >> a >> b >> ca >> cb >> fa;
    
    ll l = 0, r = cb*fa, mid, prev=-1;
    while(l != r && prev != mid) {
      prev = mid;
      mid = (l + r) >> 1;

      cout << prev << " " << mid << "\n";
      if(che(mid)) {
        r = mid;
      } else {
        l = mid+1;
      }
    }
    cout << l << "\n";
  }
  return 0;
}