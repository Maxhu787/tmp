#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1e9;

int main() {
  int n, m, start;
  cin >> n >> m >> start;
  // n: number of points
  // m: number of lines connecting them

  vector<vector<pair<int,int>>> adj(n);
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    adj[u].push_back({v, w});
    // adj[v].push_back({u, w});
  }

  vector<int> distance(n, INF);
  vector<bool> processed(n, false);
  priority_queue<pair<int,int>> q;
  distance[start] = 0;
  
  q.push({0, start});
  while (!q.empty()) {
    int a = q.top().second; 
    q.pop();
    
    if (processed[a]) continue;
    processed[a] = true;
    
    for (auto u : adj[a]) {
      int b = u.first, w = u.second;
      if (distance[a] + w < distance[b]) {
        distance[b] = distance[a] + w;
        q.push({-distance[b], b});
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (distance[i] == INF) cout << "INF\n";
    else cout << distance[i] << "\n";
  }
}
