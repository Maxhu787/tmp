#include <iostream>
#include <cmath>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
  int n;
  long long o=2;
  cin >> n;
  for(int i = 1; i < n; i++) {
    o *= 2;
    o = o % MOD;
  }
  cout << o << "\n";
  return 0;
}