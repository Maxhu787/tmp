#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
const int MOD = 1e9+7;

int main() {
  int n;
  cin >> n;

  vector<ll> combinations(n+1, 0);
  combinations[0] = 1;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= 6; j++) {
      if(i - j >= 0) {
        combinations[i] = (combinations[i] + combinations[i-j]) % MOD;
      }
    }
  }
  cout << combinations[n] << "\n";
  return 0;
}

/*
count number of ways to form sum x;

c(0) = 1
c(1) = c(0) = 1
c(2) = c(1) + c(0) = 2
c(3) = c(2) + c(1) + c(0) = 4

*/