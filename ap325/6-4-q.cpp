#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;

int main() {
  int n, start;
  cin >> n >> start;

  pair<int, int> a[n+1];
  a[0] = {start, start};
  for(int i = 0; i < n; i++) {
    int bufa, bufb;
    cin >> bufa >> bufb;
    a[i] = {bufa, bufb};
  }
  int dp[n+1][2];
  dp[0][0] = start; dp[0][1] = start;

  for(int i = 1; i <= n; i++) {
    dp[i][0] = min(
      dp[i-1][0] + abs(a[i].first - a[i-1].first), 
      dp[i-1][1] + abs(a[i].first - a[i-1].second)
    );
    dp[i][1] = min(
      dp[i-1][0] + abs(a[i].second - a[i-1].first), 
      dp[i-1][1] + abs(a[i].second - a[i-1].second)
    );
  }
  return 0;
}

/*


 1   1
 5  -5
-3  -2


i <= n; j = 0,1

dp[0][0] = start
dp[0][1] = start

dp[i][0] = min(
  dp[i-1][0] + abs(a[i][0] - a[i-1][0]), 
  dp[i-1][1] + abs(a[i][0] - a[i-1][1])
)
dp[i][1] = min(
  dp[i-1][0] + abs(a[i][1] - a[i-1][0]), 
  dp[i-1][1] + abs(a[i][1] - a[i-1][1])
)

*/