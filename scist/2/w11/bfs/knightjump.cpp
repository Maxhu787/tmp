#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

#define pii pair<int, int>
pii paths[8] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}, {1, -2}, {-1, -2}};

int main() {
  int n;
  cin >> n;
  int grid[n][n], di, dj;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      char c;
      cin >> c;
      if(c == '#') {
        grid[i][j] = 0;
      } else if(c == 'K') {
        di = i;
        dj = j;
      } else {
        grid[i][j] = 1;
      }
    }
  }

  bool visited[n][n];
  int dis[n][n];
  memset(visited, false, sizeof(visited));

  queue<pii> q;
  q.push({di, dj});
  visited[di][dj] = true;
  dis[di][dj] = 0;
  while(!q.empty()) {
    auto u = q.front();
    q.pop();

    if(u.first == 0 && u.second == 0) {
      cout << dis[u.first][u.second] << "\n";
      return 0;
    }

    for(auto i : paths) {
      int newi = i.first + u.first;
      int newj = i.second + u.second;
      if(newi < n && newi >= 0 && newj < n && newj >= 0 && 
        grid[newi][newj] && !visited[newi][newj]) {
        visited[newi][newj] = true;
        dis[newi][newj] = dis[u.first][u.second] + 1;
        q.push({newi, newj});
      }
    }
  }
  cout << "-1" << "\n";
  return 0;
}