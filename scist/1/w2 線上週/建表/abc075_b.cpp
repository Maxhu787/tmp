#include <iostream>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  char a[h][w];
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      // cin >> a[i][j];
    }
  }
  
  return 0;
}
// https://atcoder.jp/contests/abc075/tasks/abc075_b