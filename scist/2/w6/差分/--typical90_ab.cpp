#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

const int mxn = 5;
int n;
int lx, ly, rx, ry;
int a[mxn][mxn];

int main() {
  memset(a, 0, sizeof(a));
  // cin >> n;
  n = 1;

  for(int i = 0; i < n; i++) {
    // cin >> lx >> ly >> rx >> ry;
    lx=1, ly=1, rx=3, ry=2;

    a[lx][ly]++; // top left
    a[rx+1][ly]--; // bottom left
    a[lx][ry+1]--;  // top right
    a[rx+1][ry+1]++; // bottom right

  }

  for(int j = 0; j < mxn; j++) {
    for(int i = 1; i < mxn; i++) {
      a[i][j] += a[i-1][j];
    }
  }

  for(int i = 0; i < mxn; i++) {  
    for(int j = 1; j < mxn; j++) {  
      // a[i][j] = a[i][j-1];
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}


/*

2
1 1 3 2
2 1 4 2

0  0  0  0  0
0  0  0  0  0
0  0  0  0  0
0  0  0  0  0
0  0  0  0  0
*/