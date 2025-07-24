#include <iostream>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

vector<pair<int, int>> no = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
vector<pair<int, int>> yes = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
int n, m, r, c;

int main() {
  cin >> n >> m >> r >> c;
  r--; c--;

  int o[100][100];
  memset(o, 0, sizeof(o));

  for (int i = 0; i < n; i++) o[i][c] = 1;
  for (int i = 0; i < m; i++) o[r][i] = 1;
  o[r][c] = 2;

  for (int i = 0; i < 4; i++) {
    int x = r + no[i].first;
    int y = c + no[i].second;
    if (x >= 0 && x < n && y >= 0 && y < m) {
      o[x][y] = 0;
    }
  }

  for (int i = 0; i < 4; i++) {
    int x = r + yes[i].first;
    int y = c + yes[i].second;
    if (x >= 0 && x < n && y >= 0 && y < m && o[x][y] == 0) {
      o[x][y] = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (o[i][j] == 0) cout << 'X';
      else if (o[i][j] == 1) cout << 'O';
      else cout << 'V';
    }
    cout << "\n";
  }

  return 0;
}
