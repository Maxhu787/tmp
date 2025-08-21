#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int INF = 1e6;

int main() {
  int n;
  cin >> n;

  vector<int> dp(n+1, INF);
  dp[0] = 0;
  for(int current = 0; current <= n; current++) {
    int temp = current;
    while(temp > 0) {
      dp[current] = min(dp[current-(temp%10)]+1, dp[current]);
      temp /= 10;
    }
  }

  cout << dp[n] << "\n";
  return 0;
}

/*

dp
0  1  2  3  4  5  6  7  8  9 10 11 12
0  1  1  1  1  1  1  1  1  1  2  3  3  

*/