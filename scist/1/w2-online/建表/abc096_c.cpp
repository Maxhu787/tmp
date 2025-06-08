#include <iostream>
#include <cstring>
using namespace std;

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};

int main() {
  int h, w;
  cin >> h >> w;

  int a[h][w];
  memset(a, 0, sizeof(a));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      char c;
      cin >> c;
      if(c == '#') a[i][j] = 1;
    }
  }

  bool o = true;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(a[i][j]) {
        int ok = false;
        for(int k = 0; k < 4; k++) {
          if(i + dy[k] < 0 || i + dy[k] > h) continue;
          if(j + dx[k] < 0 || j + dx[k] > w) continue;

          if(a[i + dy[k]][j + dx[k]]) ok = true;
        }
        if(!ok) o = false;
      }
    }
  }
  cout << (o ? "Yes" : "No") << "\n";
  return 0;
}