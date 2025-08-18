#include <iostream>
#include <climits>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;

int main() {
  int n, x;
  cin >> n >> x;
  ll dp[x+1], coins[n];
  for(auto &i : coins) cin >> i;

  dp[0] = 1;
  for(int i = 1; i <= x; i++) {
    dp[i] = 0;
    for(auto c : coins) {
      if(i - c >= 0) {
        dp[i] = (dp[i] + dp[i-c]) % MOD;
      }
    }
  }

  cout << dp[x] << "\n";

  return 0;
}

/*
2, 3, 5

0  1
1  0
2  1
3  1
4  1
5  3
6  2
7  5
8  6
9  8


*/