#include <iostream>
#include <utility>
#include <cstring>
using namespace std;

typedef long long ll;
#define pii pair<ll, ll>
const ll mxn = 2e3+1;
ll h, w, q, t, bufa, bufb, bufc, bufd;
pii link[mxn][mxn];
const pii paths[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

pii find(pii x) {
  return link[x.first][x.second] == x ? x : link[x.first][x.second] = find(link[x.first][x.second]);
}

void join(pii a, pii b) {
  a = find(a);
  b = find(b);
  if(a == b) return;
  link[b.first][b.second] = a;
}

int main() {
  cin >> h >> w;
  bool grid[mxn][mxn];
  memset(grid, false, sizeof(grid));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      link[i][j] = {i, j};
    }
  }

  cin >> q;
  while(q--) {
    cin >> t;
    if(t == 1) {
      cin >> bufa >> bufb; 
      bufa--;bufb--;
      if(!grid[bufa][bufb]) {
        grid[bufa][bufb] = true;
        for(pii i : paths) {
          if(bufa+i.first < h && bufb+i.second < w && bufa+i.first >= 0 && bufb+i.second >= 0) {
            if(grid[bufa+i.first][bufb+i.second]) {
              join({bufa, bufb}, {bufa+i.first, bufb+i.second});
            }
          }
        }
      }
    } else {
      cin >> bufa >> bufb >> bufc >> bufd;
      bufa--;bufb--;bufc--;bufd--;
      if(grid[bufa][bufb] && grid[bufc][bufd] && find({bufa, bufb}) == find({bufc, bufd})) {
        cout << "Yes" << "\n";
      } else {
        cout << "No" << "\n";
      }
    }
  }
  return 0;
}