#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int o=0, current=0;
  int prev = 0;
  for(int i = 0; i < n; i++) {
    if(i == 0) {
      cin >> prev;
    } else {
      int t;
      cin >> t;
      if(t < prev) {
        current++;
        o = max(o, current);
      } else {
        current = 0;
      }
      prev = t;
    }
  }
  cout << o+1 << "\n";
  return 0;
}