#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

#define ll long long
const ll INF = 1e18;

int main() {
  ll n, m, start;
  cin >> n >> m;
  start = 0;

  vector<vector<pair<ll, ll>>> adj(n);
  for(int i = 0; i < m; i++) {
    ll a, b, c;
    cin >> a >> b >> c;
    a--;b--;
    adj[a].push_back({b, c});
  }

  vector<ll> o(n, INF);
  vector<bool> processed(n, false);
  priority_queue<pair<ll, ll>> q;
  o[0] = 0;

  q.push({0, start});
  while(!q.empty()) {
    ll a = q.top().second;
    q.pop();

    if(processed[a]) continue;
    processed[a] = true;

    for(auto u : adj[a]) {
      ll b = u.first, c = u.second;
      if(o[a] + c < o[b]) {
        o[b] = o[a] + c;
        q.push({-o[b], b});
      }
    }
  }

  for(int i = 0; i < n; i++) {
    if(o[i] == INF) cout << "INF" <<  " ";
    else cout << o[i] << " ";
  }
  cout << "\n";
  return 0;
}