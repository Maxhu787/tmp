#include <iostream>
using namespace std;

const int DX[] = {2, 2, 1, 1, -1, -1, -2, -2};
const int DY[] = {1, -1, 2, -2, 2, -2, 1, -1};
 
bool in_range(int x, int y)
{
	return x >= 0 && x < 5 && y >= 0 && y < 5;
}

int main() {
  char board[5][5];
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      cin >> board[i][j];
    }
  }


  bool gg = false;
  int knight_num = 0;
  int i, j, k;
  for (i=0; i<5; i++) {
    for (j=0; j<5; j++) {
      if (board[i][j] == 'k') {
        knight_num++;
        for (k=0; k<8; k++) {
          int tx = i + DX[k];
          int ty = j + DY[k];
          if (in_range(tx, ty) && board[tx][ty] == 'k') {
            gg = true;
          }
        }
      }
    }
  }
  if (knight_num != 9) {
    gg = true;
  }

  cout << (gg ? "invalid" : "valid") << "\n";

  return 0;
}