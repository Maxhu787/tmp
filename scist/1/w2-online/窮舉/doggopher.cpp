#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double gx, gy, dx, dy, x, y;
  cin >> gx >> gy >> dx >> dy;
  bool notfound = true;
  cout << setprecision(3) << fixed;
  while (cin >> x >> y) {
    if (notfound && 2 * sqrt(pow(gx - x, 2) + pow(gy - y, 2)) <= sqrt(pow(dx - x, 2) + pow(dy - y, 2))) {
      cout << "The gopher can escape through the hole at (" << x << "," << y << ").\n";
      notfound = false;
    }
  }
  if (notfound) {
    cout << "The gopher cannot escape.\n";
  }
  return 0;
}