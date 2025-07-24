#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double n, o=0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    double t;
    cin >> t;
    o += t;
  }
  cout << fixed << setprecision(3) << (o/n) << "\n";
  return 0;
}