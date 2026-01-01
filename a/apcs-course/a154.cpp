#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool uniq(int x, int y) {
  set<int> s;
  for (int i = 0; i < 5; i++) {
    s.insert(x % 10);
    x /= 10;
  }
  for (int i = 0; i < 5; i++) {
    s.insert(y % 10);
    y /= 10;
  }
  return s.size() == 10;
}

int main() {
  int n;
  while (cin >> n && n) {
    bool f = false;
    for (int y = 1234; y <= 98765; y++) { 
      int x = n * y;
      if (x > 98765) break;
      if (uniq(x, y)) {
        printf("%05d / %05d = %d\n", x, y, n);
        f = true;
      }
    }
    if (!f) cout << "There are no solutions for " << n << ".\n";
    cout << "\n";
  }
  return 0;
}
