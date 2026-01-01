#include <iostream>
#include <vector>
using namespace std;

int main() {
  int c = 1, n;
  while (cin >> n) {
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long m = 0;
    for (int i = 0; i < n; i++) {
      long long p = 1;
      for (int j = i; j < n; j++) {
        p *= a[j];
        if (p > m) m = p;
      }
    }

    cout << "Case #" << c << ": The maximum product is " << m << ".\n\n";
    c++;
  }
  return 0;
}
