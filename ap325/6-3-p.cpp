#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n], dp[n];
  for(int &i : a) cin >> i;

  dp[0]=a[0]; dp[1]=a[1];
  dp[2] = a[2] + min(dp[0], dp[1]);
  for(int i = 3; i < n; i++) {
    dp[i] = a[i] + min({dp[i-1], dp[i-2], dp[i-3]});
  }
  cout << min(dp[n-1], dp[n-2]) << "\n";
  return 0;
}

/*

dp[i] 前 i 個點的最小監控成本，而且最後一點選在 i
dp[i] = min(dp[i-1], dp[i-2], dp[i-3])

*/