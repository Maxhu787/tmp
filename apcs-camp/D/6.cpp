#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double f;
  cin >> f;

  double o = (f-32) * 5 / 9;
  cout << fixed << setprecision(3) << o << "\n";
  return 0;
}