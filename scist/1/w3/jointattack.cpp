#include <iostream>
using namespace std;

#define pii pair<long long , long long>
typedef long long ll;
const ll mxn = 40;
ll a[mxn];

pii solve(ll index, pii x) {
  ll top = x.first, bottom = x.second;
  if(index == 0) return {bottom, top};
  return solve(index-1, {bottom, a[index-1]*bottom+top});
}

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  pii o = solve(n-1, {1, a[n-1]});
  cout << o.first << "/" << o.second << "\n";
  return 0;
}
