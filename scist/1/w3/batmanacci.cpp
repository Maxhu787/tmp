#include <iostream>
#include <vector>
using namespace std;

const long long LIMIT = 1e18+5;

vector<long long> len(3, 1);

void precompute(int n) {
  if (len.size() < n+1) len.resize(n+1);
  len[1] = 1;
  len[2] = 1;
  for(int i = 3; i <= n; i++) {
    len[i] = min(LIMIT, len[i-1] + len[i-2]);
  }
}

char f(int n, long long k) {
  if(n == 1) return 'N';
  if(n == 2) return 'A';
  
  if(k <= len[n-2]) return f(n-2, k);
  return f(n-1, k - len[n-2]);
}

int main() {
  int n;
  long long k;
  cin >> n >> k;

  precompute(n);
  cout << f(n, k) << "\n";
  return 0;
}
