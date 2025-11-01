#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int &i : a) cin >> i;

  int o = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == 0) {
      if(i == 0) {
        o += abs(a[i] - a[i+1]);
      } else if(i == n-1) {
        o += abs(a[i] - a[i-1]);
      } else {
        o += min(abs(a[i] - a[i-1]), abs(a[i] - a[i+1]));
      }
    }
  }
  cout << o << "\n";
  return 0;
}