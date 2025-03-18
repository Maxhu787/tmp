#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
  int n;
  bool first = true;
  while(cin >> n && n != 0) {
    if(!first) cout << "\n";
    first = false;
    map<int, int> m;
    
    vector<int> a(n), b(n), o(n);
    for(int i = 0; i < n; i++) {
      int t; cin >> t;
      a[i] = t; o[i] = t;
    }
    for(int &i : b) cin >> i;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i = 0; i < n; i++) {
      m[a[i]] = b[i];
    }

    for(auto i : o) cout << m[i] << "\n";
  }
  return 0;
}