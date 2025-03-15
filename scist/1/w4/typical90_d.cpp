#include <iostream>
#include <vector>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  int a[h][w];
  vector<int> r(w, 0), c(h, 0);
  for(int i = 0; i < h; i++) {
    int temp = 0;
    for(int j = 0; j < w; j++) {
      int t;
      cin >> t;
      r[j] += t;
      temp += t;
      a[i][j] = t;
    }
    c[i] = temp;
  } 

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cout << r[j] + c[i] - a[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}