#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a1, b1, c1, a2, b2, c2, n, x1, x2, o = -99999;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
  
  for(int i = 0; i <= n; i++) {
    x1 = i, x2 = n - i;
    o = max(o, 
    ((a1 * x1 * x1) + (b1 * x1) + c1) + ((a2 * x2 * x2) + (b2 * x2) + c2));
  }
  cout << o << "\n";
  return 0;
}