#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
const ll INF = 1e18;

int n;
ll dp[400][400+1];
ll a[400], p[400];

ll s(int i, int j) {
  return p[j - 1] - ((i >= 1) ? p[i - 1] : 0);
}

ll f(int i, int j) {
  if(dp[i][j] != INF) {
    return dp[i][j];
  }
  if(j-i == 1) {
    return 0;
  }

  ll o = INF;
  for(int k = i+1; k < j; k++) {
    ll temp = f(i, k) + f(k, j) + s(i, j);
    o = min(o, temp);
  }
  dp[i][j] = o;
  
  return o;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  p[0] = a[0];
  for(int i = 1; i < n; i++) {
    p[i] = p[i-1] + a[i];
  }

  for(int i = 0; i < n; i++) {
    for(int j = i; j <= n; j++) {
      dp[i][j] = INF;
    }
  }

  cout << f(0, n) << "\n";
  return 0;
}

// f(i, j) = min(f(i, k) + f(k, j) + s[i,k) + s[k, j))