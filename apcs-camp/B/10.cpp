#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int x1, x2, x3, x4, y1, y2, y3, y4;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
  int m, n;
  cin >> m >> n;

  int max_x=max({x1, x2, x3});
  int min_x=min({x1, x2, x3, x4});
  int max_y=max({y1, y2, y3, y4});
  int min_y=min({y1, y2, y3, y4});
  if((m <= max_x && m >= min_x) && (n <= max_y && n >= min_y)) {
    cout << "IN" << "\n";
  } else {
    cout << "OUT" << "\n";
  }
  return 0;
}