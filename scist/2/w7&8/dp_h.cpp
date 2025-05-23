#include <iostream>
using namespace std;

const int MOD = 1e9+7;

int main() {
  int h, w;
  cin >> h >> w;

  int a[h][w];
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      char c;
      cin >> c;
      if(c == '.') a[i][j] = 1;
      if(c == '#') a[i][j] = 0;
    }
  }

  long long dp[h][w];
  dp[0][0] = 1;

  for(int i = 1; i < h; i++) {
    dp[i][0] = (a[i][0] ? dp[i-1][0] : 0);
  }

  for(int i = 1; i < w; i++) {
    dp[0][i] = (a[0][i] ? dp[0][i-1] : 0);
  }

  for(int i = 1; i < h; i++) {
    for(int j = 1; j < w; j++) {
      if(a[i][j] == 0) {
        dp[i][j] = 0;
      } else {
        dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
      }
    }
  }
  cout << dp[h-1][w-1] << "\n";
  return 0;
}