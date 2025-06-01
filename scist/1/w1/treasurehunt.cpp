#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;

  char a[r][c];
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      cin >> a[i][j];
    }
  }

  int x=0, y=0;
  int visited[r][c];
  memset(visited, 0, sizeof(visited)); 
  int o = 0;
  while((x >= 0 && x < r) && (y >= 0 && y < c)) {
    if(visited[x][y] == 1) {
      cout << "Lost" << "\n";
      return 0;
    }
    char curr = a[x][y];
    visited[x][y] = 1;
    if(curr == 'N') x--;
    else if(curr == 'S') x++;
    else if(curr == 'W') y--;
    else if(curr == 'E') y++;
    else if(curr == 'T') {
      cout << o << "\n";
      return 0;
    };
    o++;
  }
  cout << "Out" << "\n";
  return 0;
}