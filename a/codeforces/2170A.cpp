#include <iostream>
using namespace std;

void solve() {
  int n, u, d, l, r, current;
  cin >> n;
  int o = 0;
  for(int i = n; i > 0; i--) {
    for(int j = n; j > 0; j--) {
      current = (1 + n*(n-i)) + (n-j);
      u = (1 + n*(n-i-1)) + (n-j); d = (1 + n*(n-i+1)) + (n-j);
      l = (1 + n*(n-i)) + (n-j-1); r = (1 + n*(n-i)) + (n-j+1);

      if(u < 0 || u > n*n) u = 0; 
      if(d < 0 || d > n*n) d = 0;
      if(l < 0 || l > n*n || j == n) l = 0;
      if(r < 0 || r > n*n || j == 1) r = 0;
      current=current+u+d+l+r;
      o = max(o, current);
    }
  }
  cout << o << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

/*




1 2
3 4

1 2 3
4 5 6
7 8 9
 

 1  2  3  4
 5  6  7  8
 9 10 11 12
13 14 15 16
n=4
(1 + n*(n-i)) + (n-j)

(1 + n*(n-2)) + (n-2) = 11

(1 + n*(n-3)) + (n-2) = u
(1 + n*(n-1)) + (n-2) = d
(1 + n*(n-2)) + (n-1) = l
(1 + n*(n-2)) + (n-3) = r


(1 + n*(n-1)) + (n-2) = 15

  1  2  3  4  5
  6  7  8  9 10
 11 12 13 14 15
 16 17 18 19 20
 21 22 23 24 25
*/