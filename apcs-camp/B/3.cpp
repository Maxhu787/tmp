#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a == 0) {
    cout << "No real root" << "\n";
    return 0;
  }

  int D = (b * b) - (4 * a * c);

  if(D > 0) {
    int x1 = (-b + sqrt(D)) / (2 * a);
    int x2 = (-b - sqrt(D)) / (2 * a);
    if (x1 < x2) swap(x1, x2);
    cout << "Two different roots x1=" << x1 << " , x2=" << x2 << "\n";
  } else if (D == 0) {
    int x = (-b) / (2 * a);
    cout << "Two same roots x=" << x << "\n";
  } else {
    cout << "No real root" << "\n";
  }
  return 0;
}