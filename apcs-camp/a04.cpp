#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << 60 * (c * 60 + d - (a * 60 + b)) << "\n";
  return 0;
}