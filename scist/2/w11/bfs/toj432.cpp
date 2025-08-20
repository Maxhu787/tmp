#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define pii pair<int, int>
int n, m, startx, starty, endx, endy, f, bufa, bufb;
pii directions[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int main() {
  cin >> n >> m >> startx >> starty >> endx >> endy >> f;
  startx--;starty--;endx--;endy--;
  int grid[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      grid[i][j] = 1;
    }
  }

  while(f--) {  
    cin >> bufa >> bufb;
    bufa--;bufb--;
    grid[bufa][bufb] = 0;
  }

  queue<pii> q;
  q.push({startx, starty});
  if(!grid[startx][starty]) {
    cout << "Harakiri!" << "\n";
    return 0;
  }
  while(!q.empty()) {
    pii u = q.front();
    q.pop();
    if(u.first == endx && u.second == endy) {
      cout << "Cool!" << "\n";
      return 0;
    }
    for(pii i : directions) {
      if((u.first + i.first) >= 0 && (u.first + i.first) < n && (u.second + i.second) >= 0 && (u.second + i.second) < m) {
        if(!grid[u.first + i.first][u.second + i.second]) continue;
        grid[u.first + i.first][u.second + i.second] = 0;
        q.push({u.first + i.first, u.second + i.second});
      }
    }
  }
  cout << "Harakiri!" << "\n";
  return 0;
}