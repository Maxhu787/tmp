#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

#define OK ios_base::sync_with_stdio(0);
#define LOL cin.tie(0); cout.tie(0);

int n, p;
const int MOD = 1e9+7;

int main() {
  OK LOL
  cin >> n >> p;

  vector<long long> a(n);
  for(long long &i : a) cin >> i;

  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
  for(int i = 0; i < n; i++) pq.push({a[i], i});

  while(p--) {
    auto [value, i] = pq.top();
    pq.pop();
    pq.push({value + 1, i});
  }

  long long o = 1;
  while(!pq.empty()) {
    o = (o * (pq.top().first % MOD)) % MOD;
    pq.pop();
  }

  cout << o<< "\n";
}