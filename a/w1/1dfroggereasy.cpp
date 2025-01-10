#include <iostream>
using namespace std;

int main() {
  int n, s, m;
  cin >> n >> s >> m;
  int a[n], b[n];
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    a[i] = t;
    b[i] = 0;
  }
  s-=1;
  int o=0;
  while(true) {
    if(s < 0) {
      cout << "left" << "\n" << o << "\n";
      break;
    } else if (s > (n - 1)) {
      cout << "right" << "\n" << o << "\n";
      break;
    } else if(b[s] == 1) {
      cout << "cycle" << "\n" << o << "\n";
      break;
    } else {
      if(a[s] == m) {
        cout << "magic" << "\n" << o << "\n";
        break;
      } else {
        b[s] = 1;
        s += a[s];
        o += 1;
      }
    }
  }
  return 0;
}