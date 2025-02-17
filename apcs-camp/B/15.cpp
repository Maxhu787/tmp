#include <iostream>
using namespace std;

int main() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;

  for(int i = 0; i <= m; i++) {
    int dd = x * i + y * (m - i);
    if(dd == n) {
      cout << i << " " << m - i << "\n";
      return 0;
    }
  }
  cout << -1 << " " << -1 << "\n";
  return 0;
}