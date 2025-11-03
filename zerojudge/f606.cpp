#include <iostream>
#include <algorithm>
#include <climits>
#include <cstring>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  int grid[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> grid[i][j];
    }
  }
  int o=INT_MAX;
  while(k--) {
    int temp[m][m];
    memset(temp, 0, sizeof(temp));
    for(int i = 0; i < n; i++) {
      int t;
      cin >> t;
      for(int j = 0; j < m; j++) {
        temp[t][j] += grid[i][j];
      }
    }
    int oo = 0;
    for(int i = 0; i < m; i++) {
      for(int j = 0; j < m; j++) {
        if(i == j) {
          oo += temp[i][j];
        } else {
          if(temp[i][j] > 1000) {
            oo += ((temp[i][j]-1000)*2 + 1000*3);
          } else {
            oo += temp[i][j]*3;
          }
        }
      }
    }
    o = min(o, oo);
  }
  cout << o << "\n";
  return 0;
}