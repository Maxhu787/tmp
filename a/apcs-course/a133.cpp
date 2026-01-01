#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int m = 0, s = 0;
    for (int i = 0; i < n; i++) {
      s += a[i];
      if (s < 0) s = 0;
      if (s > m) m = s;
    }

    cout << m << "\n";
  }
  return 0;
}
