#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  for(int &i : h) cin >> i;

  vector<int> dp(n);
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  for(int i = 2; i < n; i++) {
    dp[i] = min(
      dp[i-1] + abs(h[i] - h[i-1]),
      dp[i-2] + abs(h[i] - h[i-2])
    );
  }

  cout << dp[n-1] << "\n";
  return 0;
}