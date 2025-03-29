#include <iostream>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  for(int i = 0; i < n; i++) {
    int a=0, b=0;
    for(int j = 0; j < m; j++) {
      int t;
      cin >> t;
      if(t == 0) a++;
      else b++;
    }
    cout << a << " " << b << "\n";
  }
}

int main() {
  int a[4] = {0, 1, 0, 1};

  int o = a[0];
  for(int i = 1; i < 4; i++) {
    o ^= a[i];
  }
  cout << o << "\n";

  // int t;
  // cin >> t;
  // while(t--) {
  //   solve();
  // }
  return 0;
}