#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int t = (n - k);

  long long o = 1;
  for(int i = k+1; i <= n; i++) {
    o *= i;
  }

  long long oo = 1;
  for(int i = 1; i <= t; i++) {
    oo *= i;
  }

  cout << o / oo << "\n";
  return 0;
}