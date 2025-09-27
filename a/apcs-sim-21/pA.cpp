#include <iostream>
using namespace std;

int main() {
  int n, k, m;
  cin >> n >> k >> m;
  int a[n];

  int current = 0;
  a[0] = 0;
  for(int i = 1; i <= n; i++) {
    int t;
    cin >> t;
    current+=t;
    a[i] = current;
  }

  int o = 0;
  for(int i = 0; i < n-k+1; i++) {
    if((a[i+k] - a[i]) / k >= m) o++;
  }
  cout << o << "\n";
  return 0;
}