#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

#define OK cin.tie(0);cout.tie(0);
#define LOL ios::sync_with_stdio(0);
typedef long long ll;

int main() {
  int n, k;
  cin >> n >> k;

  ll a[n];
  ll dp[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < k; i++) {
    if(i < n) {
      dp[i] = abs(a[i] - a[0]);
    }
  }
  for(int i = k; i < n; i++) {
    dp[i] = INT_MAX;
    for(int j = 1; j <= k; j++) {
      dp[i] = min(abs(a[i]-a[i-j]) + dp[i-j], dp[i]);
    }
  }
  cout << dp[n-1] << "\n";
  return 0;
}

/*

a[i] dp[i]
10   0
30   20
40   30
50   40
20   30

*/