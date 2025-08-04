#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<vector<int>> adj(n + 1);
  queue<int> q;
  vector<bool> visited(n + 1, false);
  vector<int> distance(n + 1, -1);

  visited[x] = true;
  distance[x] = 0;
  q.push(x);
  while (!q.empty()) {
    int s = q.front(); q.pop();
    for (auto u : adj[s]) {
      if (visited[u]) continue;
      visited[u] = true;
      distance[u] = distance[s] + 1;
      q.push(u);
    }
  }
}
