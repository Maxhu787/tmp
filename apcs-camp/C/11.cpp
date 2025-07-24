#include <iostream>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  int a[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  while(q--) {
    int k, o=0;
    cin >> k;

    int temp[k];
    for(int &i : temp) {
      int t;
      cin >> t; t--;
      i = t;
    }

    for(int i = 0; i < k; i++) {
      for(int j = 0; j < k; j++) {
        o += a[temp[i]][temp[j]];  
      }
    }

    cout << o << "\n";
  }
  return 0;
}