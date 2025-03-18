#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int &i : a) cin >> i;
  sort(a.begin(), a.end());
  
  int o=a[0];
  for(int i = 1; i < n; ++i) {
    if(a[i] != a[i-1] + 1) {
      o += a[i];
    }
  }
  cout << o << "\n";
  return 0;
}