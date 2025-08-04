#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;

  int a[n];
  for(int &i : a) cin >> i;

  ll o = 1e18;
  for(int mask = 0; mask < (1 << n); mask++) {
    ll sumA = 0, sumB = 0;
    for(int pos = 0; pos < n; pos++) {
      if(mask & (1 << pos)) {
        // 1 << 2 = 0000100
        sumA += a[pos];
      } else {
        sumB += a[pos];
      }
    }

    o = min(o, abs(sumA - sumB));
  }
  cout << o << "\n";
  return 0;
}

// n <= 20 
// o(n * 2^n)