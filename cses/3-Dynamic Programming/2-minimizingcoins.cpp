#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

typedef long long ll;
const ll INF = LONG_MAX;

int main() {
  int n, x;
  cin >> n >> x;
  ll coins[n];
  ll dp[x+1];
  for(auto &i : coins) cin >> i;
  
  dp[0] = 0;
  for(int i = 1; i <= x; i++) {
    dp[i] = INF;
    for(auto c : coins) {
      if(i - c >= 0 && dp[i-c] != INF) {
        dp[i] = min(dp[i], dp[i-c]+1);
      }
    }
  }
  cout << (dp[x] != INF ? dp[x] : -1) << "\n";
  return 0;
}