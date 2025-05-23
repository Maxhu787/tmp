#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int mxn = 1000;
int n;
int lx, ly, rx, ry;
int a[mxn][mxn];

int main() {
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> lx >> ly >> rx >> ry;


    int w=rx - lx, h;
    a[lx][ly - 1]--;
  }

  return 0;
}


/*

2
1 1 3 4
3 4 6 5


0 0 0 0 1 1 1
0 1 1 2 1 1 1
0 1 1 1 0 0 0
0 1 1 1 0 0 0
0 1 1 1 0 0 0
0 0 0 0 0 0 0


0  0  0  0  1  1  1
0  1  1  2  0  0  0
0  0  0 -1 -1 -1 -1
0  0  0  0  0  0  0
0  0  0  0  0  0  0
0 -1 -1 -1  0  0  0


0  0  0  0  1  0  0
0  1  0  1 -2  0  0
0  0  0 -1  0  0  0
0  0  0  0  0  0  0
0  0  0  0  0  0  0
0 -1  0  0  1  0  0

*/