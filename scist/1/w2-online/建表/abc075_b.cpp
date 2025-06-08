#include <iostream>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  int a[h][w];

  const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
  const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      char c;
      cin >> c;
      a[i][j] = ((c == '.') ? 0 : 1);
    }
  }

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(a[i][j]) {
        cout << "#";
      } else {
        int o = 0;
        for(int k = 0; k < 8; k++) {
          if(i + dy[k] < 0 || i + dy[k] >= h) continue;
          if(j + dx[k] < 0 || j + dx[k] >= w) continue;

          if(a[i + dy[k]][j + dx[k]]) {
            o++;
          }
        }
        cout << o;
      }
    }
    cout << "\n";
  }
}