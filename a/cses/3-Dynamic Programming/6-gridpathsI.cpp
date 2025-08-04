#include <iostream>
using namespace std;

const int MOD = 1e9+7;

int main() {
  int n;
  cin >> n;

  int a[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      char c;
      cin >> c;
      if(c == '.') a[i][j] = 1;
      if(c == '*') a[i][j] = 0;
    }
  }

  long long dp[n][n];
  dp[0][0] = a[0][0];

  for(int i = 1; i < n; i++) {
    dp[i][0] = (a[i][0] ? dp[i-1][0] : 0);
  }

  for(int i = 1; i < n; i++) {
    dp[0][i] = (a[0][i] ? dp[0][i-1] : 0);
  }

  for(int i = 1; i < n; i++) {
    for(int j = 1; j < n; j++) {
      if(a[i][j]) {
        dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
      } else {
        dp[i][j] = 0;
      }
    }
  }
  cout << dp[n-1][n-1] << "\n";
  return 0;
}