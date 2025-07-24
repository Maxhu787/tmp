#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int h, w, q, t;
int main() {
  cin >> h >> w >> q;

  int maxHW = max(h, w);
  int a[maxHW][maxHW];
  memset(a, -1, sizeof(a));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }

  while(q--) {
    int type;
    cin >> type;

    if(type) {
      for(int i = 0; i < maxHW / 2; i++) {
        for(int j = 0; j < maxHW; j++) {
          t = a[maxHW - i - 1][j];
          a[maxHW - i - 1][j] = a[i][j];
          a[i][j] = t;
        }
      }
    } else {
      for(int i = 0; i < maxHW; i++) {
        for(int j = i + 1; j < maxHW; j++) {
          t = a[i][j];
          a[i][j] = a[j][i];
          a[j][i] = t;
        }
      }

      for(int i = 0; i < maxHW; i++) {
        for(int j = 0; j < maxHW / 2; j++) {
          int t = a[i][j];
          a[i][j] = a[i][maxHW - 1 - j];
          a[i][maxHW - 1 - j] = t;
        }
      }
    }
  }

  vector<vector<int>> o;
  for(int i = 0; i < maxHW; i++) {
    vector<int> t;
    for(int j = 0; j < maxHW; j++) {
      if(a[i][j] != -1) {
        t.push_back(a[i][j]);
      }
    }
    if(t.size()) o.push_back(t);
  }

  cout << o.size() << " " << o[0].size() << "\n";
  for(auto i : o) {
    for(auto j : i) {
      cout << j << " ";
    }
    cout << "\n";
  }
}

// treat like square fill in blanks (-1)
// swap diagonally a[i][j] <=> a[j][i]
// then mirror