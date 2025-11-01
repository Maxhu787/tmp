#include <iostream>
using namespace std;

int main() {
  int n=5, m=8, d=97;
  cin >> n >> m >> d;
  int o = (d / n) * n;

  while(o >= 0) {
    if((d - o) % m == 0) {
      cout << "YES" << "\n";
      return 0;
    }
    o -= n;
  }
  cout << "NO" << "\n";
  return 0;
}
