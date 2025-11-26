#include <iostream>
#include <vector>
#include <utility>
using namespace std;

const int mxn = 1e5;
const int mxk = 1e5;
struct st {
  int count;
  vector<int> child;
};

int n, m, k, t;
int r[mxn][mxk], s[mxn][mxk];

int main() {
  cin >> n >> m >> k >> t;

  int prev[t];
  for(int i = 0; i < t; i++) cin >> prev[i];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < k; j++) {
      cin >> r[i][j];
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < k; j++) {
      cin >> s[i][j];
    }
  }


  return 0;
}

/*
count, [can open]

5 5 1
2 0 1

0
2
4
3
1

1
2
4
3
3



*/