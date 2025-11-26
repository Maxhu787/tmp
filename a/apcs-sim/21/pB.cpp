#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  int grid[n+1][m+1];
  memset(grid, 0, sizeof(grid));
  for(int i = 1; i <= m; i++) cin >> grid[0][i];
  for(int i = 1; i <= n; i++) cin >> grid[i][0];

  int c[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      char t;
      cin >> t;
      if(t == '&') {
        c[i][j] = 1;
      } else if(t == '|') {
        c[i][j] = 2;
      } else {
        c[i][j] = 3;
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      int a = grid[i-1][j], b = grid[i][j-1];
      vector<int> aa, bb;

      while(a != 0) {aa.push_back(a % k);a /= k;}
      while(b != 0) {bb.push_back(b % k);b /= k;}

      if(aa.size() < bb.size()) swap(aa, bb);
      int oo = 0, curr = 1, tt;
      if(c[i-1][j-1] == 1) {
        for(int h = 0; h < aa.size(); h++) {
          tt = min(aa[h], bb[h]);
          oo += (tt * curr);
          curr *= k;
        }
      } else if(c[i-1][j-1] == 2) {
        for(int h = 0; h < aa.size(); h++) {
          tt = max(aa[h], bb[h]);
          oo += (tt * curr);
          curr *= k;
        }
      } else {
        for(int h = 0; h < aa.size(); h++) {
          tt = (aa[h] + bb[h]) % k;
          oo += (tt * curr);
          curr *= k;
        }
      }
      grid[i][j] = oo;
      cout << grid[i][j];
      if(j != m) cout << " ";
    }
    cout << "\n";
  }
  return 0;
}

/*


4 5 5
16 3 13 48 13
47 34 14 44

4 5 5
  16 3 13 48 13
47
34
14
44


*/