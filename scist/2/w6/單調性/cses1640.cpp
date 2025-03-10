#include <iostream>
#include <utility>
#include <map>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  map<int, int> m;
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    if(m[x-t]) {
      cout << m[x-t] << " " << i+1 << "\n";
      return 0;
    }
    m[t] = i + 1;
  }
  cout << "IMPOSSIBLE" << "\n";
  return 0;
}