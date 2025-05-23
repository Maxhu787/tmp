#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  long long a[h][w];
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      char c; cin >> c;
      if(c == '.') a[i][j] = 1;
      if(c == '#') a[i][j] = 0;
    }
  }

  long long dp[h][w];
  if(!a[0][0]) {
    cout << 0 << "\n";
    return 0;
  }
  dp[0][0] = 1;

  for(int i = 1; i < w; i++) {
    if(a[0][i] && dp[0][i-1]) dp[0][i] = dp[0][i-1] + 1;
    else dp[0][i] = 0;
  }

  for(int i = 1; i < h; i++) {
    if(a[i][0] && dp[i-1][0]) dp[i][0] = dp[i-1][0] + 1;
    else dp[i][0] = 0;
  }

  for(int i = 1; i < h; i++) {
    for(int j = 1; j < w; j++) {
      if(a[i][j] && (dp[i-1][j] || dp[i][j-1])) {
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + 1;
      } else {
        dp[i][j] = 0;
      }
    }
  }
  
  long long o = 1;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      o = max(o, dp[i][j]);
    }
  }

  cout << o << "\n";
  return 0;
}

/*

設dp[i][j]為在第[i][j]格時所經過最多的格子數，這樣轉移式就變成
dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + 1 (if 轉移源！= 0)
dp[i][j] = 0 (if arr[i][j] == #)
，最後設dp[1][1]為1，並同時統計最大值就ok了

.#..
..#.
..##

1 0 0 0
2 3 0 0
3 4 0 0

*/