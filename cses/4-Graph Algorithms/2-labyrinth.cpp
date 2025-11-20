#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <queue>
using namespace std;

#define pii pair<int, int>
pii mp[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int mxn = 1e3+1;
char grid[mxn][mxn];
bool visited[mxn][mxn];
pii parent[mxn][mxn];

int main() {
  int n, m;
  cin >> n >> m;

  int si=0,sj=0, ei=0,ej=0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      char t;
      cin >> t;
      grid[i][j] = t;
      if(t == 'A') {
        si=i,sj=j;
      } else if(t == 'B') {
        ei=i,ej=j;
      }
    }
  }

  queue<pii> q;
  q.push({si, sj});
  visited[si][sj] = true;
  parent[si][sj] = {-1, -1};
  while(!q.empty()) {
    pii u = q.front();
    q.pop();
    for(int i = 0; i < 4; i++) {
      int newi = u.first + mp[i].first;
      int newj = u.second + mp[i].second;
      if(newi < n && newi >= 0 && newj < m && newj >= 0) {
        if(grid[newi][newj] != '#' && !visited[newi][newj]) {
          visited[newi][newj] = true;
          parent[newi][newj] = {u.first, u.second};
          q.push({newi, newj});
        }
      }
    }
  }

  if(!visited[ei][ej]) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
    vector<pii> o;
    int curri = ei, currj = ej;
    while( curri != -1 && currj != -1) {
      o.push_back({curri, currj});
      int temp = curri;
      curri = parent[curri][currj].first;
      currj = parent[temp][currj].second;
    }
    reverse(o.begin(), o.end());
    cout << o.size()-1 << "\n";
    int previ=-1, prevj=-1;
    for(auto i : o) {
      if(previ != -1) {
        if((prevj - i.second) > 0) {
          cout << "L";
        } else if((prevj - i.second) < 0) {
          cout << "R";
        } else if((previ - i.first) > 0) {
          cout << "U";
        } else {
          cout << "D";
        }
      }
      previ = i.first;
      prevj = i.second;
    }
    cout << "\n";
  }
  return 0;
}