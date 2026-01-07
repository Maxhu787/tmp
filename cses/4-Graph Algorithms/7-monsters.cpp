#include <iostream>
#include <deque>
using namespace std;

#define pii pair<int, int>
pii mp[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

const int mxn = 1e3+1;
const int mxm = 1e3+1;
pii parent[mxn][mxm];

int main() {
  int n, m;
  cin >> n >> m;

  deque<pii> q;
  int grid[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      char c;
      cin >> c;
      if(c == 'M') {
        q.push_back({i, j});
        grid[i][j] = 2;
      } else if(c == 'A') {
        q.push_front({i, j});
        parent[i][j] = {-1, -1};
        grid[i][j] = 3;
      } else if(c == '#') {
        grid[i][j] = 1;
      } else {
        grid[i][j] = 0;
      }
    }
  }

  // path: 0; wall: 1; monster: 2; player: 3;
  int oi, oj;
  while(!q.empty()) {
    auto u = q.front();
    q.pop_front();

    cout << u.first+1 << " " << u.second+1 << "\n";
    bool monster = false;
    if(grid[u.first][u.second] == 2) monster = true;
    for(auto i : mp) {
      int newi, newj;
      newi = u.first + i.first;
      newj = u.second + i.second;
      if(newi < n && newi >= 0 && newj < m && newj >= 0) {
        if(monster) {
          if((grid[newi][newj] == 0 || grid[newi][newj] == 3)) {
            // path, player
            grid[newi][newj] = 2;
            q.push_back({newi, newj});
          }
        } else {
          if(grid[newi][newj] == 0) {
            // path
            grid[newi][newj] = 3;
            parent[newi][newj] = {u.first, u.second};
            q.push_back({newi, newj});

            if(newi == n-1 || newi == 0 || newj == m-1 || newj == 0) {
              oi = newi; oj = newj;
              cout << "found" << "\n";
              break;
            }
          }
        }
      }
    }
  }
  cout << "---\n";
  for(int a = oi, b = oj; a != -1 && b != -1; a = parent[a][b].first, b = parent[a][b].second) {
    cout << a+1 << " " << b+1 << "\n";
  }
  return 0;
}
