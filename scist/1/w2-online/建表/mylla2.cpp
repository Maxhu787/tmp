#include <iostream>
#include <utility>
using namespace std;

int main() {
  int a[3][3];
  pair<int, int> m[8] = {{0, 0}, {1, 0}, {2, 0}, {0, 0}, {0, 1}, {0, 2}, {0, 0}, {0, 2}};
  pair<int, int> n[8] = {{0, 1}, {1, 1}, {2, 1}, {1, 0}, {1, 1}, {1, 2}, {1, 1}, {1, 1}};
  pair<int, int> o[8] = {{0, 2}, {1, 2}, {2, 2}, {2, 0}, {2, 1}, {2, 2}, {2, 2}, {2, 0}};

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      char t;
      cin >> t;
      if(t == '_') {
        a[i][j] = 0;
      } else if (t == 'O') {
        a[i][j] = 1;
      } else {
        a[i][j] = 2;
      }
    }
  }

  for(int i = 0; i < 8; i++) {
    if((a[m[i].first][m[i].second] == 1) &&  (a[n[i].first][n[i].second] == 1) && (a[o[i].first][o[i].second] == 1)) {
      cout << "Jebb" << "\n";
      return 0;
    }
  }
  cout << "Neibb" << "\n";
  return 0;
}

/*
(0, 0), (0, 1), (0, 2)
(1, 0), (1, 1), (1, 2)
(2, 0), (2, 1), (2, 2)
*/