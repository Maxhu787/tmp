#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, capacity;
  cin >> n >> capacity;

  vector<int> w(n), v(n);
  for (int i = 0; i < n; i++) cin >> w[i] >> v[i];

  vector<int> dp(capacity+1, 0);
  vector<int> last(capacity+1, -1);
  for (int i = 0; i < n; i++) {
    for(int j = capacity; j >= w[i]; j--) { /* 0/1 */
    // for(int j = w[i]; j <= capacity; j++) { /* multiple */
      if (dp[j - w[i]] + v[i] > dp[j]) {
        dp[j] = dp[j - w[i]] + v[i];
        last[j] = i;
      }
    }
  }
  cout << dp[capacity] << "\n";

  vector<int> count(n, 0);
  int curr = capacity;
  while (curr > 0 && last[curr] != -1) {
    int i = last[curr];
    count[i]++;
    curr -= w[i];
  }

  for (int i = 0; i < n; i++) {
    if(count[i] > 0) cout << i << " " << count[i] << " " << w[i] << "\n";
  }
  return 0;
}
