#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
  int n;
  cin >> n;

  long long o=1;
  for(int i = 1; i <= n; i++) {
    o = (o * i) % MOD;
  }
  cout << o % MOD << "\n";
  return 0;
}