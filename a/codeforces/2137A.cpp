#include <iostream>
using namespace std;

#define OK cin.tie(0);cout.tie(0);
#define LOL ios::sync_with_stdio(0);
typedef pair<int, int> pii;
typedef long long ll;

int main() {
  OK LOL
  ll t;
  cin >> t;
  while(t--) {
    ll k, x;
    cin >> k >> x;
    ll current = x;
    for(int i = 0; i < k; i++) {
      current *= 2;
    }
    cout << current << "\n";
  }
  return 0;
}