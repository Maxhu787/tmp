#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, t;
  cin >> n;
  vector<int> a;

  for(int i = 0; i < n; i++) {
    cin >> t;
    if(t != 0) {
      a.push_back(t);
    }
  }
  int max = 0;
  for(int i = 0; i < n; i++) {
    int o=0;
    for(int j = 0; j < a.size(); j++) {
      if(j >= i) {
        o += (j+2) * a[j];
      } else {
        o += (j+1) * a[j];
      }
    }
    max = std::max(o, max);
  }
  cout << max << "\n";
  return 0;
}

/*
3
1 0 -2

1 -2


0 1 -2

0 1 2 => 0 1 -2
1 0 2 => 1 0 -2
2 0 1 => 1 -2 0
*/