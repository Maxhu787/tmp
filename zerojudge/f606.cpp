#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int q[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> q[i][j];
    }
  }

  int o = INT_MAX;
  for(int i = 0; i < k; i++) {
    int temp[n][m];
    memset(temp, 0, sizeof(temp));
    for(int j = 0; j < n; j++) {
      int c;
      cin >> c;
      for(int k = 0; k < m; k++) {
        temp[c][k] += q[j][k];
      }
    }

    int oo = 0;
    for(int j = 0; j < n; j++) {
      for(int k = 0; k < m; k++) {
        int curr = temp[j][k];
        if(j == k) {
          oo += curr;
        } else if(curr > 1000) {
          oo += ((curr - 1000) * 2 + 1000*3);
        } else {
          oo += curr * 3;
        }
      }
    }

    o = min(o, oo);
  }
  
  cout << o << "\n";
  return 0;
}