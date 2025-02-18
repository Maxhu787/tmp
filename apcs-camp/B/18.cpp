#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n, m;
    cin >> n;

    while(cin >> m && m != 0) {
      if(n == 0) {
        n = 10000;
      }
      if(n <= 99 && n >= 10) {
        n -= m;
      } else if(n <= -10 && n >= -99) {
        n += m;
      } else if(n <= -100 || n >= 100) {
        n /= m;
      } else if((n <= 9 && n >= 1) || (n >= -9 && n <= -1)) {
        n *= m;
      }
    }
    if(n == 0) {
      cout << 10000 << "\n";
    } else {
      cout << n << "\n";
    }
  }
  return 0;
}
