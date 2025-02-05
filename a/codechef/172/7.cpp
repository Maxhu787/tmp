#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  while(n--) {
    int l, t;
    cin >> l >> t;

    string s;
    cin >> s;
    while(t--) {
      int ll, rr;
      cin >> ll >> rr;
      int o=0, e=0;
      for(int i = ll-1; i < rr; i++) {
        if(s[i] != '0') {
          if(i % 2 ==0) {
            o += 1;
          } else {
            e += 1;
          }
        }
      }
      cout << o << " " << e << "\n";
      // cout << ((o - e == 0) ? "YES" : "NO") << "\n";
    }
  }
  return 0;
}

