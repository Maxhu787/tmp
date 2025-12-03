#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int mxn = 1e5, mxm=1e5, mxk=5;
int n, m, k, t, bufa;
vector<int> open[mxm], keys[mxn];
int got[mxm], deg[mxn];

int main() {
  cin.tie(0);ios::sync_with_stdio(0);
  cin >> n >> m >> k >> t;
  queue<int> q;
  for(int i = 0; i < t; i++) {
    cin >> bufa;
    q.push(bufa);
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < k; j++) {
      cin >> bufa;
      open[bufa].push_back(i);
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < k; j++) {
      cin >> bufa;
      keys[i].push_back(bufa);
    }
  }

  int o = 0;
  while(!q.empty()) {
    int u = q.front();
    q.pop();
    // cout << u << " ";
    if(!got[u]) {
      got[u] = 1;
      for(int i : open[u]) {
        if(deg[i] != k) {
          deg[i]++;
          if(deg[i] == k) {
            o++;
            for(int j : keys[i]) {
              q.push(j);
            }
          }
        }
      }
    }
  }
  // for(int i = 0 ; i < n; i++) {
  //   cout << deg[i] << " ";
  // }
  // cout << "\n";
  cout << o << "\n";
  return 0;
}

/*

10 8 2
3 6 5 2

5 6
2 7
2 0
4 5
5 1
3 0
4 2
2 4
5 3
5 6

5 0
0 6
1 7
3 2
2 1
7 3
4 7
4 5
4 1
7 5

*/