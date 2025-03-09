#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, o = 1;
  while((cin >> n) && !cin.eof()) {
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    long long best = 0;
    for(int i = 0; i < n; i++) {
      long long t = 1;
      for(int j = i; j < n; j++) {
        t *= a[j];
        best = max(best, t);
      }
    }
    cout << "Case #" << o << ": The maximum product is " << best << ".\n\n";
    o++;
  }
  return 0;
}