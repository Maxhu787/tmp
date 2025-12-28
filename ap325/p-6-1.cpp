#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int &i : a) cin >> i;

  int dp[n];
  dp[0] = a[0]; dp[1] = a[1];

  for(int i = 2; i < n; i++) {
    dp[i] = min(dp[i-1], dp[i-2]) + a[i];
  }
  cout << dp[n-1] << "\n";
  return 0;
}

/*

dp[i] = min(dp[i-1], dp[i-2]) + value[i]

*/