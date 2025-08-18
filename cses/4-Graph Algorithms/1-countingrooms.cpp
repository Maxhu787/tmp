#include <iostream>
#include <utility>
#include <cstring>
#include <queue>
using namespace std;

#define pii pair<int, int>
typedef long long ll;
const pii op[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int main() {
  int n, m;
  cin >> n >> m;
  
  int a[n][m];
  bool visited[n][m];
  memset(visited, 0, sizeof(visited));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      char c;
      cin >> c;
      if(c == '.') {
        a[i][j] = 1;
      } else {
        a[i][j] = 0;
      }
    }
  }

  int o = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(!visited[i][j] && a[i][j]) {
        queue<pii> q;
        q.push({i, j});
        visited[i][j] = true;

        while(!q.empty()) {
          auto s = q.front();
          q.pop();
          for(const pii &i : op) {
            int newi=s.first+i.first, newj=s.second+i.second;
            if((newi < n) && (newj < m) && (newi >= 0) && (newj >= 0)
            && !visited[newi][newj] && a[newi][newj]) {
              visited[newi][newj] = true;
              q.push({newi, newj});
            }
          }
        }
        o++;
      }
    }
  }
  cout << o << "\n";
  
  return 0;
}