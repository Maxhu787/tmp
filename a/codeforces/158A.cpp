#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for(int &i : a) cin >> i;

  k--;
  int o = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] < a[k]) {
      cout << o << "\n";
      return 0;
    } else if(a[i] >= a[k] && a[i] > 0) {
      o++;
    }
  }
  cout << o << "\n";
  return 0;
}